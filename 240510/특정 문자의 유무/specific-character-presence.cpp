#include <iostream>
#include <string>

int main(void) {
	std::string str;
	std::cin >>str;
	std::cout << ((str.find("ee") == std::string::npos) ? "No " : "Yes ");
	std::cout << ((str.find("ab") == std::string::npos) ? "No " : "Yes ");

	return 0;
}