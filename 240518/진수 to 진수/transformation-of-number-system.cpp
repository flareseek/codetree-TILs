#include <iostream>
#include <string>

int n1, n2;
void func(int n) {
    if (n >= n2) func(n/n2);
    else {
        std::cout << n;
        return;
    }
    std::cout << n % n2;

}

int main(void) {
  std::string input;
  std::cin >> n1 >> n2 >> input;
  int size = input.size();
  int decimal = 0;
  for (int i = 0; i < size; i++) {
    decimal = decimal * n1 + (input[i] - '0');
  }
  func(decimal);
  return 0;
}