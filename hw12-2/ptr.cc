#include<iostream>
using namespace std;

template <class T>
class My_shared_ptr
{
	private:
		T* m_obj;
		int* count;
	public:
		My_shared_ptr()
		{
			m_obj = new T(NULL);
			count = new int(NULL);
		}
		
		My_shared_ptr(T* obj)
		{
			if(m_obj == NULL) {
				m_obj = new T(NULL);
				m_obj = obj;
			}
			else
				m_obj = obj;
			if(count == NULL)
				count = new int(1);
			else
				increase();
		}
		
		My_shared_ptr(const My_shared_ptr& rhs)//copy constructor.
		{
			if(m_obj == NULL)
				m_obj = new T(rhs.get_m_obj());
			else
				m_obj = rhs.get_m_obj();
			if(count == NULL)
				count = new int(1);
			else
				increase();
		}
		
		~My_shared_ptr()
		{
			decrease();
			if(getCount() == 0) {
				delete m_obj, count;
				cout << "everything destroyed" << endl;
			}
		}
		
		My_shared_ptr<T>& operator=(My_shared_ptr<T>& rhs)
		{
			if(*count == 0) {
				m_obj = new T(NULL);
				m_obj = rhs.m_obj;
				rhs.increase();
				count = rhs.count;
			}
			else if(*count == 1) {
				m_obj = rhs.m_obj;
				rhs.increase();
				count = rhs.count;
			}
			else if(*count > 1)
				My_shared_ptr(rhs);
			return *this;
		}

		int getCount(){
			int cnt = *count;
			return cnt;
		}

		void increase(){
			int cnt = *count;
			*count = cnt + 1;
		}

		void decrease(){
			int cnt = *count;
			*count = cnt - 1;
		}

		const T* get_m_obj()
		{
			return m_obj;
		}
};

typedef unsigned long T;
int main()
{
	{		
		My_shared_ptr<T> a;
		cout<<a.getCount()<<endl;
		{
			My_shared_ptr<T> b(new T(5));
			cout<<a.getCount()<<endl;
			cout<<b.getCount()<<endl;
			
			if(a.get_m_obj() == b.get_m_obj())
				cout << "resource shared" << endl;
			
			a = b;//assignment operation
			cout<<a.getCount()<<endl;
			cout<<b.getCount()<<endl;
			
			if(a.get_m_obj() == b.get_m_obj())
				cout << "resource shared" << endl;
		}
		cout<<a.getCount()<<endl;
	}
	return 0;
}
