#include <iostream>
#include <string>
#include <algorithm>

int main(void) {
  int n;
  std::string str[100];
  std::cin >> n;
  for(int i = 0; i < n; i++) std::cin >> str[i];
  std::sort(str, str+n);
  for(int i = 0; i < n; i++) {
    std::cout << str[i] << "\n";
  }
  return 0;
}