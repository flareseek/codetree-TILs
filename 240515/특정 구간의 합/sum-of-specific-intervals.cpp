#include <iostream>

int A[100];

void printSum(int a1, int a2) {
  int sum = 0;
  for (int i = a1-1; i < a2; i++) {
    sum += A[i];
  }
  std::cout << sum << "\n";
}
int main(void) {
  int n, m;
  std::cin >> n >> m;
  for (int i = 0; i < n; i ++) {
    std::cin >> A[i];
  }
  while (m-->0) {
    int a1, a2;
    std::cin >> a1 >> a2;
    printSum(a1, a2);
  }
  return 0;
}