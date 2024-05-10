#include <iostream>

bool condition(int A) {
	if (A % 2) return false;
	int sum = 0;
	while (A != 0) {
		sum += A % 10;
		A /= 10;
	}
	return !(A % 5);
}
int main(void) {
	/*
	 * 2자리 숫자 들어옴
	 * 조건에 맞으면 yes, 아니면 no
	 *
	 * 조건은 각 자리 숫자 합이 5의 배수
	 */

	int A;
	std::cin >> A;

	std::cout << (condition(A) ? "Yes" : "No");
	return 0;
}