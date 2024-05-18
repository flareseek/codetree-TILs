#include <iostream>
#include <string>

int main() {
    std::string binary;
    std::cin >> binary;
    int size = binary.size();
    int result = 0;
    for (int i = 0; i < size; i++) {
        result = result * 2 + (binary[i] - '0');
    }
    std::cout << result;
    return 0;
}