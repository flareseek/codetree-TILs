#include <iostream>

int main() {
    bool field[2001][2001] = {false};
    int x1, y1, x2, y2;

    std::cin >> x1 >> y1 >> x2 >> y2;

    for (int x = x1; x < x2; x++) 
        for (int y = y1; y < y2; y++) 
            field[x+1000][y+1000] = true;
    
    std::cin >> x1 >> y1 >> x2 >> y2;
    for (int x = x1; x < x2; x++) 
            for (int y = y1; y < y2; y++) 
                field[x+1000][y+1000] = false;

    int minX=2001, minY=2001, maxX=0, maxY = 0;
    for (int x = 0; x <= 2000; x++)
        for (int y = 0; y <= 2000; y++)
            if (field[x][y]) {
                if (x < minX) minX = x;
                if (y < minY) minY = y;
                if (x > maxX) maxX = x;
                if (y > maxY) maxY = y;
            }
    std::cout << (maxX+1-minX)*(maxY+1-minY);
    return 0;
}