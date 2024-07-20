#include <iostream>
#define SIZE 1000001
int main() {
    int N, M;
    int a_field[SIZE] = {0};
    int b_field[SIZE] = {0};
    int a_index = 1;
    int b_index = 1;
    std::cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        int v, t;
        std::cin >> v >> t;
        while(t--) {
            a_field[a_index] = a_field[a_index-1] + v;
            a_index ++;
        }
    }
    for (int i = 1; i <= M; i++) {
        int v, t;
        std::cin >> v >> t;
        while(t--) {
            b_field[b_index] = b_field[b_index-1] + v;
            b_index ++;
        }
    }
    
    int p = 0; // 1: a, 2: b
    int cnt = 0;
    for (int i = 0; i < a_index; i++) {
        if (a_field[i] == b_field[i]) continue;
        else if (p == 0) {
            if (a_field[i] > b_field[i]) p = 1;
            else p = 2;
        }
        else if (p == 2 && a_field[i] > b_field[i]) {
            cnt ++;
            p = 1;
        }
        else if (p == 1 && a_field[i] < b_field[i]) {
            cnt ++;
            p = 2;
        }
    }
    std::cout << cnt;
    return 0;
}