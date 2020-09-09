#include "MyVector.h"
#include "MyContainer.cpp"
#include <iostream>

template <typename T>
MyVector<T>::MyVector()
	:MyContainer<T>()
{
	capacity = 0;
}

template <typename T>
MyVector<T>::MyVector(int n)
	:MyContainer<T>(n)
{
	capacity = n;
}

template <typename T>
MyVector<T>::MyVector(T* arr, int n)
	:MyContainer<T>(arr, n)
{
	capacity = n;
}

template <typename T>
bool MyVector<T>::empty()
{
	if(MyContainer<T>::size() == 0)
		return 1;
	return 0;
}

template <typename T>
int MyVector<T>::size()
{
	return MyContainer<T>::size();
}

template <typename T>
int MyVector<T>::max_size()
{
	return capacity;
}

template <typename T>
void MyVector<T>::reserve(int new_cap)
{
	capacity = new_cap;
	T* tmp = new T[capacity];
	for(int i = 0; i < this->n_elements; i++)
		tmp[i] = this->obj_arr[i];
	this->obj_arr = tmp;
}

template <typename T>
void MyVector<T>::push_back(T obj)
{
	if(this->n_elements + 1 >= capacity)
		reserve(capacity == 0 ? 1 : capacity * 2);
	this->obj_arr[this->n_elements] = obj;
	this->n_elements++;
}

template <typename T>
void MyVector<T>::pop_back()
{
	delete this->obj_arr[this->n_elements - 1];
	this->n_elements--;
}

template <typename T>
T& MyVector<T>::front()
{
	return this->obj_arr[0];
}

template <typename T>
T& MyVector<T>::back()
{
	return this->obj_arr[this->n_elements - 1];
}

template <typename T>
T& MyVector<T>::at(int idx)
{
	return this->obj_arr[idx];
}

template <typename T>
T& MyVector<T>::operator[](const int& i)
{
	return this->obj_arr[i];
}

template <typename T>
MyVector<T> MyVector<T>::operator+(const MyVector<T>& rhs)
{
	for(int i = 0; i < rhs.n_elements; i++) {
		T obj = rhs.obj_arr[i];
		push_back(obj);
	}
	return MyVector<T>(this->obj_arr, size());
}
