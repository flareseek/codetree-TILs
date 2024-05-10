#include <iostream>
#include <string>

int main(void) {
	int sum = 0;
	std::string str;
	std::cin >> str;
	sum += str.length();
	std::cin >> str;
	sum += str.length();
	std::cout << sum;
	return 0;
}