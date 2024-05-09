#include <iostream>

int main(void) {
    char arr[5][3];
    for (int row = 0; row < 5; row ++) {
        for (int col = 0; col < 3; col ++) {
            std::cin >> arr[row][col];
            arr[row][col] -= 'a'-'A';
            std::cout << arr[row][col] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}