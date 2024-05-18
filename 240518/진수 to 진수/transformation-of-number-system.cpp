#include <iostream>
#include <string>

int main(void) {
  int n1, n2;
  std::string input;
  std::cin >> n1 >> n2 >> input;
  int size = input.size();
  int decimal = 0;
  for (int i = 0; i < size; i++) {
    decimal = decimal * n1 + (input[i] - '0');
  }
  while(decimal != 0) {
    std::cout << decimal % n2;
    decimal /= n2;
  }
  return 0;
}