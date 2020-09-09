#include <iostream>
using namespace std;

template <class T>
class Node {
public:
	T data;
	Node<T>* next;
	Node(T d) { data = d; next = NULL; }
	Node(T d, Node<T>* n) { data = d; next = n; }
};

template <class T>
class List {
private:
	Node<T>* head;
public:
	List() : head(NULL){

	}

	List(T* arr, int n_nodes) {
		Node<T>* ptr = NULL;
		for(int i = 0; i < n_nodes; i++) {
			if(ptr) {
				ptr->next = new Node<T> (arr[i]);
				ptr = ptr->next;
			}
			else
				head = ptr = new Node<T> (arr[i]);
		}
	}

	bool isEmpty() const {

	}

	void insert_at(int idx, T data) {
		Node<T>* ptr = head;
		for(int i = 0; i < idx - 1; i++)
			ptr = ptr->next;
		Node<T>* tmp = ptr->next;
		ptr->next = new Node<T> (data, tmp);
	}

	void remove_at(int idx) {
		Node<T>* ptr = head;
		for(int i = 1; i < idx - 1; i++)
			ptr = ptr->next;
		Node<T>* tmp = ptr->next;
		ptr->next = ptr->next->next;
		delete tmp;
	}

	void pop_back() {
		Node<T>* it = head -> next;
		while(1) {
			if(it->next->next == NULL)
				break;
			it = it->next;
		}
		delete it->next;
		it->next = NULL;
	}

	void push_back(T val) {
		Node<T>* it = head -> next;
		while(it->next != NULL)
			it = it->next;
		it->next = new Node<T> (val);
	}

	void pop_front() {
		Node<T>* ptr = head -> next;
		delete head;
		head = ptr;
	}

	void push_front(T val) {
		Node<T>* ptr = new Node<T> (val, head);
		head = ptr;
	}

	friend ostream& operator<<(ostream& out, const List& rhs) {
		Node<T>* ptr = rhs.head;
		while(1) {
			if(ptr->next == NULL) {
				out << ptr->data << endl;
				break;
			}
			else {
				out << ptr->data << ",";
				ptr = ptr->next;
			}
		}
	}
};
