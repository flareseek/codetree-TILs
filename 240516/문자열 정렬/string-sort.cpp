#include <iostream>
#include <string>
#include <algorithm>

int main(void) {
  std::string str;
  std::cin >> str;
  std::sort(str.begin(), str.end());
  std::cout << str;
  return 0;
}