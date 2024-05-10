#include <iostream>
#include <string>

int main(void) {
	std::string str;
	std::cin >> str;
	str = str.erase(1, 1);
	str = str.erase(str.length()-2,1);
	std::cout << str;

	return 0;
}