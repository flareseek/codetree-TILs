#include <iostream>
#include <climits>

int main() {
    int max = INT_MIN;
    for (int i = 0; i < 10; i++) {
        int a = 0;
        std::cin >> a;
        if (a > max) max = a;
    }

    std::cout << max;
    return 0;
}