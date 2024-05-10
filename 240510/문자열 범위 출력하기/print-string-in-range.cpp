#include <iostream>
#include <string>

int main(void) {
	std::string str;
	getline(std::cin, str);
	for (int i = 2; i < 10; i++)
		std::cout << str[i];
	return 0;
}