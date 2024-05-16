#include <iostream>
#include <algorithm>

int main(void) {
  int n, cnt = 0;
  int arr[100];
  std::cin >> n;
  
  for (int i = 0 ; i < n; i++) {
    std::cin >> arr[i];
    if (i % 2 == 0) {
      std::sort(arr, arr+i+1);
      std::cout << arr[i/2] << " ";
    }
  }
  return 0;
}