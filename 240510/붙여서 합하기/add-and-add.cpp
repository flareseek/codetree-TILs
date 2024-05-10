#include <iostream>
#include <string>

int main(void) {
	std::string A, B;
	std::cin >> A >> B;
	std::cout << std::stoi(A+B) + std::stoi(B+A);
	return 0;
}