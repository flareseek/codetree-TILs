#include <iostream>

int main(void) {
  int N, cur = 100000;
  int white[200001] = {0};
  int black[200001] = {0};
  int arr[200001] = {0};
  std::cin >> N;
  while(N--) {
    int x;
    char c;
    std::cin >> x >> c;
    if (c == 'R') {
      for (int i = 0; i < x; i++) {
        black[cur+i] ++;
        arr[cur+i] = 1;
      }
      cur += (x-1);
    } else {
      for (int i = 0; i < x; i++) {
        white[cur-i] ++;
        arr[cur-i] = -1;
      }
      cur -= (x-1);
    }
  }
  
  int w=0, b=0, g=0;
  for (int i = 0; i < 200001; i++) {
    if (arr[i] != 0) {
      if (white[i] >= 2 && black[i] >= 2) g++;
      else if (arr[i] == 1) b++;
      else w++;
    }
  }
  std::cout << w << " " << b << " " << g;
  return 0;
}