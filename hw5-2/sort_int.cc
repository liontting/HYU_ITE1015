#include <iostream>
#include "sort.h"
using namespace std;

int main() {
	int n;
	cin >> n;
	if(n <= 0)
		return 0;
	int* arr = new int[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	arr = sort(arr, n);
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << "\n";
	return 0;
}
