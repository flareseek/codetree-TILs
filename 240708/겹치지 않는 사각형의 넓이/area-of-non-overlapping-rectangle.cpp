#include <iostream>

int main() {
    bool field[2001][2001] = {false};
    int fx = 2001, fy = 2001, lx = 0, ly = 0;

    for (int i = 0; i < 2; i++) {
        int x1, y1, x2, y2;
        std::cin >> x1 >> y1 >> x2 >> y2;

        if (x1 < fx) fx = x1;
        if (y1 < fy) fy = y1;
        if (lx < x2) lx = x2;
        if (ly < y2) ly = y2;
        x1 += 1000;
        y1 += 1000;
        x2 += 1000;
        y2 += 1000;
        
        for (int x = x1; x < x2; x++)
            for (int y = y1; y < y2; y++)
                field[x][y] = true;
    }
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    for (int x = x1; x < x2; x++)
        for (int y = y1; y < y2; y++)
            field[x][y] = false;
    
    int result = 0;
    for (int x = fx; x < lx; x++)
        for (int y = fy; y < ly; y++) 
            if(field[x][y]) 
                result ++;
    
    std::cout << result;
    
    return 0;
}