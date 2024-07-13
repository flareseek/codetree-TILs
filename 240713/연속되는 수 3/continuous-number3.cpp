#include <iostream>
using namespace std;

int main() {
    int N, t, result = 0, count = 1;
    bool is = false;
    std::cin >> N;
    std::cin >> t;
    if (t >= 0) is = true;
    N--;
    while(N--) {
        std::cin >> t;
        if ((is && t >= 0) || (!is && t < 0)) count ++;
        else {
            is = !is;
            if (result < count) result = count;
            count = 1;
        }
    }
    if (result < count) result = count;
    std::cout << result;
    return 0;
}