#include <iostream>

int main() {
    int n, t, count = 0, temp = 0;
    std::cin >> n >> t;
    while(n--) {
        int d;
        std::cin >> d;
        if (t < d) {
            temp ++;
        } else {
            if (count < temp) {
                count = temp;
                temp = 0;
            }
        }
    }
    if (count < temp) {
        count = temp;
        temp = 0;
    }
    std::cout << count;
    return 0;
}