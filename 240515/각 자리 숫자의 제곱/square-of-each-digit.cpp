#include <iostream>

int rec(int n) {
  if (n < 10) return n*n;
  return rec(n/10) + (n%10) * (n%10);
}

int main(void) {
  int n;
  std::cin >> n;
  std::cout << rec(n);
  return 0;
}