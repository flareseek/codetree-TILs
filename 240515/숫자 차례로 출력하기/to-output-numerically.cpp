#include <iostream>

void rec1(int n) {
  if (n > 1) rec1(n-1);
  std::cout << n << " ";
}
void rec2(int n) {
  std::cout << n << " ";
  if (n > 1) rec2(n-1);
}
int main(void) {
  int n;
  std::cin >> n;
  rec1(n);
  std::cout << "\n";
  rec2(n);
  return 0;
}