#include <iostream>

int main() {
    int arr[10] = {};
    int size = 0;
    for(int i = 0; i < 10; i++) {
        std::cin >> arr[i];
        if (arr[i] >= 250) break;
        size ++;
    }

    int result = 0;
    for(int i = 0; i < size; i++) {
        result += arr[i];
    }

    std::cout << std::fixed;
    std::cout.precision(1);
    std::cout << result << " " << result / (double) size;
    return 0;
}