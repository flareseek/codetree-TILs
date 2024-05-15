#include <iostream>

void rec(int n) {
  for (int i = 0; i < n; i++) 
    std::cout << "* ";
  std::cout << "\n";
  if (n > 1) rec(n-1);
  for (int i = 0; i < n; i++) 
    std::cout << "* ";
  std::cout << "\n";
}
int main(void) {
  int n;
  std::cin >> n;
  rec(n);
  return 0;
}