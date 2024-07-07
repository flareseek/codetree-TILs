#include <iostream>

int main() {
    int n, result = 0;
    std::cin >> n;

    while(n != 0) {
        result += n%10;
        n /= 10;
    }
    std::cout << result;
    return 0;
}