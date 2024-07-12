#include <iostream>

int main() {
    int N;
    int arr[1001] = {0};
    int last;
    int count = 0;
    int t_count = 0;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }

    last = arr[0];
    t_count = 1;
    for (int i = 1; i < N; i++) {
        if (arr[i] != arr[i-1]) {
            if (t_count > count) {
                count = t_count;
                t_count = 1;
            } else {
                t_count = 0;
            }
        } else {
            t_count ++;
        }
    }
    if (t_count > count) {
        count = t_count;
        t_count = 0;
    }
    std::cout << count;
    return 0;
}