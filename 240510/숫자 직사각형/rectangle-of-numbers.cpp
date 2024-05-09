#include <iostream>

int main(void) {
	int arr[100][100];
	int row, col, cnt = 1;
	std::cin >> row >> col;
	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++) {
			arr[r][c] = cnt++;
		}
	}
	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++) {
			std::cout << arr[r][c] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}