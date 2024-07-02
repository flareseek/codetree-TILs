#include <iostream>
#include <algorithm>

int main() {
    int n;
    int lines[201] = {0};
    std::cin >> n;
    for (int q = 0; q < n; q++) {
        int x1, x2;
        std::cin >> x1 >> x2;
        for(int i = x1 + 100 + 1; i <= x2+100; i++)
            lines[i] --;
    }
    std::sort(lines, lines+200);
    std::cout << -lines[0];
    return 0;
}