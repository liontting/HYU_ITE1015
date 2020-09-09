#include <iostream>

int main() {
	int arr[3][2], ill = 0, yee = 0;
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 2; j++)
			std::cin >> arr[i][j];
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 2; j++)
			std::cout << arr[i][j] << " ";
		std::cout << "\n";
	}
	for(int i = 0; i < 3; i++) {
		ill += arr[i][0];
		yee += arr[i][1];
	}
	std::cout << "Sum of numbers in 1 column: " << ill << "\n";
	std::cout << "Sum of numbers in 2 column: " << yee << "\n";
	return 0;
}
