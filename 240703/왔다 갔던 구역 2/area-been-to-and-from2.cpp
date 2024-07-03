#include <iostream>

int main() {
    int n, cur = 1000;
    int arr[2000] = {0};
    std::cin >> n;
    while(n--) {
        int x;
        char c;
        std::cin >> x >> c;
        if (c == 'R') {
            for (int i = 0; i < x; i++)
                arr[cur + i] ++;
            cur += x;
        } else {
            for (int i = 1; i <= x; i++)
                arr[cur-i] ++;
            cur -= x;
        }
    }
    int result = 0;
    for (int i = 0; i < 2000; i++) {
        if (arr[i] >= 2)
            result ++;
    }
    std::cout << result;
    return 0;
}