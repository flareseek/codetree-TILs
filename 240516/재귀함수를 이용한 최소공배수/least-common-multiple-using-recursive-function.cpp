#include <iostream>

int rec(int n, int a) {
  int b;
  std::cin >> b;
  int t1 = a;
  int t2 = b;
  if (t1 < t2) {
    int t = t1;
    t1 = t2;
    t2 = t;
  }
  while(t2) {
    int t = t1 % t2;
    t1 = t2;
    t2 = t;
  }
  int result = (a*b)/t1;
  if (n-1 > 0) return rec(n-1, result);
  else return result;
}

int main(void) {
  int n;
  std::cin >> n;
  std::cout << rec(n, 1);
  return 0;
}