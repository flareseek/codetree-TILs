#include <iostream>
#include <string>
#include <algorithm>

int main(void) {
  int n, k;
  std::string T;
  std::string strs[101];
  std::cin >> n >> k >> T;
  strs[0] = T;
  for (int i = 1; i < n+1; i++) {
    std::cin >> strs[i];
  }
  
  std::sort(strs, strs+n+1);
  for (int i = 0; i < n+1; i++) {
    if (strs[i] == T) {
      std::cout << strs[i+k];
      break;
    }
  }

  return 0;
}