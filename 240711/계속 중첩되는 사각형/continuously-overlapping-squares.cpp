#include <iostream>
#define SIZE 201
#define OFFSET 100
int main() {
    bool color = false;
    bool field[SIZE][SIZE] = {false};
    int n;
    std::cin >> n;
    while (n--) {
        int x1, y1, x2, y2;
        std::cin >> x1 >> y1 >> x2 >> y2;
        for (int i = x1; i < x2; i++)
            for (int j = y1; j < y2; j++)
                field[i+OFFSET][j+OFFSET] = color;
        color = !color;
    }
    int count = 0;
    for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                if(field[i][j]) count ++;
    std::cout << count;
    return 0;
}