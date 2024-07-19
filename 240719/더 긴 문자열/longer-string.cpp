#include <iostream>
#include <string>

int main() {
    std::string a, b;
    std::cin >> a >> b;
    if (a.size() > b.size()) {
        std::cout << a << " " << a.size();
    } else if(a.size() == b.size()) 
        std::cout << "same";
    else std::cout << b << " " << b.size();
    return 0;
}