#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int result = 0;
    int d = 1;
    while(n != 0) {
        result += (n%10)*d;
        n /= 10;
        d *= 2;
    }
    std::cout << result;
    return 0;
}