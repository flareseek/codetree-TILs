#include <iostream>

int main() {
    int N, M, K;
    int arr[100] = {0};
    std::cin >> N >> M >> K;
    while(M--) {
        int k;
        std::cin >> k;
        arr[k] ++;
        if (arr[k] >= K) {
            std::cout << k;
            return 0;
        }
    }
    return 0;
}