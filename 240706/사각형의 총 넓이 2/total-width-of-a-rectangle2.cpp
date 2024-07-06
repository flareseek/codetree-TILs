#include <iostream>
using namespace std;

int main() {
    int N;
    bool table[201][201] = {false};
    std::cin >> N;
    while(N--) {
        int x1, y1, x2, y2;
        std::cin >> x1 >> y1 >> x2 >> y2;
        x1 += 100;
        x2 += 100;
        y1 += 100;
        y2 += 100;

        for (int i = x1; i < x2; i++) {
            for (int j = y1; j < y2; j++) {
                table[i][j] = true;
            }
        }
    }

    int result = 0;
    for (int i = 0; i < 201; i++) 
        for (int j = 0; j < 201; j++)
            if (table[i][j]) result ++;
    
    std::cout << result;
    return 0;
}