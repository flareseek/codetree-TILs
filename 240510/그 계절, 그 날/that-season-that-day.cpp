#include <iostream>
#include <string>

/*
 * date가 존재한다면 // isValidDate()
 * 어떤 계절인지 출력하시오printSeason()
 * 존재하지 않다면 -1
 */

bool is(int Y) {
	return (Y % 400 == 0) || (Y % 4 == 0 && Y % 100 != 0);
}
bool isValidDate(int Y, int M, int D) {
	if (M == 2) {
		if (is(Y))
			return D <= 29;
		return D <= 28;
	}
	if (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || 
			M == 10 || M == 12) return D <= 31;
	return D <= 30;
}

std::string getStringSeason(int M) {
	if (3 <= M && M <= 5) return "Spring";
	else if (6 <= M && M <= 8) return "Summer";
	else if (9 <= M && M <= 11) return "Fall";
	else return "Winter";
}

int main(void) {
	int Y, M, D;
	std::cin >> Y >> M >> D;

	if (isValidDate(Y, M, D)) {
		std::cout<< getStringSeason(M);
	} else {
		std::cout<< -1;
	}

	return 0;
}