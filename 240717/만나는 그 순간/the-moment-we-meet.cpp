#include <iostream>

int main() {
    int N, M, last;
    int A[1000001] = {0};
    int B[1000001] = {0};
    A[0] = 0;
    B[0] = 0;
    std::cin >> N >> M;

    int index = 1;
    for (int i = 0; i < N; i++) {
        char d;
        int t;
        std::cin >> d >> t;
        while(t--) {
            if (d == 'R')
                A[index] = A[index-1] + 1;
            else 
                A[index] = A[index-1] - 1;
            index ++;
        }
    }
    last = index;
    index = 1;
    for (int i = 0; i < M; i++) {
        char d;
        int t;
        std::cin >> d >> t;
        while(t--) {
            if (d == 'R')
                B[index] = B[index-1] + 1;
            else 
                B[index] = B[index-1] - 1;
            index ++;
        }
    }
    for (int i = 1; i < 1000001; i++) {
        if (A[i] == B[i]) {
            if (last <= i) std::cout << -1;
            else std::cout << i;
            return 0;
        }
    }
    return 0;
}