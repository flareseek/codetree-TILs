#include <iostream>

int main() {
    int arr[200001] = {0};
    int n, cur = 100000;
    std::cin >> n;
    while(n--) {
        int x;
        char c;
        std::cin >> x >> c;

        if (c == 'R') {
            for (int i = 0; i < x; i++) {
                arr[cur+i] = 1;
            }
            cur += (x-1);
        } else {
            for (int i = 0; i < x; i++) {
                arr[cur-i] = -1;
            }
            cur -= (x-1);
        }
    }

    int b = 0, w = 0;
    for (int i = 0; i < 200001; i++) {
        if (arr[i] == 1) b ++;
        else if (arr[i] == -1) w++;
    }
    std::cout << w << " " << b;
    return 0;
}