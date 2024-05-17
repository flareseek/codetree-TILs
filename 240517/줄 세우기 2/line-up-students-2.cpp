#include <iostream>
#include <tuple>
#include <algorithm>

int main() {
    std::tuple<int, int, int> s[1000];
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int height, weight;
        std::cin >> height >> weight;
        s[i] = std::make_tuple(height, -weight, i);
    }
    std::sort(s, s+n);
    for (int i = 0; i < n; i++) {
        std::cout << std::get<0>(s[i]) << " " << -std::get<1>(s[i]) << " " << std::get<2>(s[i])+1 << "\n";
    }
    return 0;
}