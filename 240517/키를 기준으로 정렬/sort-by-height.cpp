#include <iostream>
#include <algorithm>
#include <tuple>

int main(void) {
  // height, weight, name
  std::tuple<int, int, std::string> arr[10];
  int n;
  std::cin >> n;

  std::string name;
  int height, weight;
  for (int i = 0; i < n; i++) {
    std::cin >> name >> height >> weight;
    arr[i] = std::make_tuple(height, weight, name);
  }
  std::sort(arr, arr+n);

  for (int i = 0; i < n; i++) {
    std::cout << std::get<2>(arr[i]) << " " 
      << std::get<0>(arr[i]) << " "
      << std::get<1>(arr[i]) << "\n";
  }
  return 0;
}