#include <iostream>

int main(void) {
	/* 최소 공배수: A*B/GCD */
	/* GCD(A, B) = GCD(B, A mod B) if A > B */
	int A, B;
	std::cin >> A >> B;
	int result = A*B;

	if (B>A) {
		int temp = A;
		A = B;
		B = temp;
	}

	while (B > 0) {
		int t = A;
		A = B;
		B = t % B;
	}
	std::cout << result/A;
	return 0;
}