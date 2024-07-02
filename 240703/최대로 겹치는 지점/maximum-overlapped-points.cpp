#include <iostream>

int main() {
    int n;
    int lines[101] = {0};
    std::cin >> n;
    while(n--) {
        int x1, x2;
        std::cin >> x1 >> x2;
        for(int i = x1; i <= x2; i++)
            lines[i] ++;
    }
    int max = 0;
    for(int i = 1; i < 101; i++)
        if (max < lines[i])
            max = lines[i];
    std::cout << max;
    return 0;
}