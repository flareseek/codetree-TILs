#include <iostream>

int main() {
    int N;
    bool field[201][201] = {{false}};

    std::cin >> N;
    while(N--) {
        int x, y;
        std::cin >> x >> y;
        x += 100;
        y += 100;

        for (int r = x; r < x+8; r++)
            for (int c = y; c <y+8; c++) 
                field[r][c] = true;
    }

    int result = 0;
    for (int r = 0; r < 201; r++)
        for (int c = 0; c < 201; c++)
            if (field[r][c]) 
                result ++;
    
    std::cout << result;
    return 0;
}