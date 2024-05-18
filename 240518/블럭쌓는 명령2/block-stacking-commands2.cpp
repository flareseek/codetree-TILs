#include <iostream>
#include <algorithm>
int main() {
    // 여기에 코드를 작성해주세요.
    int N, K;
    int arr[101] = {0};
    std::cin >> N >> K;

    for (int i = 0; i < K; i++) {
        int A, B;
        std::cin >> A >> B;
        for (int j = A; j <= B; j++) {
            arr[j] --;
        }
    }
    std::sort(arr, arr+N);
    std::cout << -arr[0];
    return 0;
}