#include <iostream>
#include <string>

int main() {
    int md[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int m1, d1, m2, d2, d=0;
    std::string mm;
    std::cin >> m1 >> d1 >> m2 >> d2 >> mm;

    if (mm == "Sun") d = 6;
    else if (mm == "Sat") d = 5;
    else if (mm == "Fri") d = 4;
    else if (mm == "Thu") d = 3;
    else if (mm == "Wed") d = 2;
    else if (mm == "Tue") d = 1;
    else d = 0;

    for (int i = 1; i < m1; i++) {
        d1 += md[i];
    }

    for (int i = 1; i < m2; i++) {
        d2 += md[i];
    }

    // 0 mon... 6 sun
    int cnt = (d2-d1)/7;

    if ((d2-d1)%7 == d) cnt ++;

    std::cout << cnt;
    
    return 0;
}