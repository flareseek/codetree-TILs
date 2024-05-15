#include <iostream>

int main(void) {
  int a, b;
  std::cin >> a >>  b;

  if (a > b) {
    a *= 2;
    b += 10;
  } else {
    a += 10;
    b *= 2;
  }

  std::cout << a << " " << b;
  return 0;
}