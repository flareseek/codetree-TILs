#include <iostream>

int main() {
    int N, count = 1, temp = 1, last, t;
    std::cin >> N;
    std::cin >> last;
    N--;
    while(N--) {
        int t;
        std::cin >> t;
        if (last < t) {
            temp ++;
        } else {
            if (count < temp) count = temp;
            temp = 1;
        }
        last = t;
    }
    if (count < temp) count = temp;
    std::cout << count;
    return 0;
}