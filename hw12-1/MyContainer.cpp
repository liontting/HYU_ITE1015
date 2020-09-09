#include "MyContainer.h"
#include <iostream>


template <typename T>
MyContainer<T>::MyContainer()
{
	obj_arr = NULL;
	n_elements = 0;
}

template <typename T>
MyContainer<T>::MyContainer(int n)
{
	obj_arr = new int[n];
	n_elements = n;
}

template <typename T>
MyContainer<T>::MyContainer(T* arr, int n)
{
	obj_arr = new int[n];
	for(int i = 0; i < n ; i++)
		obj_arr[i] = arr[i];
	n_elements = n;
}

template <typename T>
MyContainer<T>::~MyContainer()
{
	delete[] obj_arr;
}

template <typename T>
void MyContainer<T>::clear()
{
	delete[] obj_arr;
	n_elements = 0;
}

template <typename T>
int MyContainer<T>::size()
{
	return n_elements;
}
