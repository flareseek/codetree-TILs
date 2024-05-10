#include <iostream>
#include <string>

int main(void) {
	int A, B;
	std::cin >> A >> B;
	std::string str = std::to_string(A + B);
	int size = str.length();
	int cnt = 0;
	for (int i = 0; i < size; i++) {
		if (str[i] == '1') cnt ++;
	}
	std::cout << cnt;
	return 0;
}