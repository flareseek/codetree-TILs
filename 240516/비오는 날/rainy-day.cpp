#include <iostream>
#include <string>

class Info {
  public: 
    int y;
    int m;
    int d;
    std::string ds;
    std::string w;
};

int main(void) {
  int n;
  std::cin >> n;
  Info info;
  info.y = 2101;


  for (int i = 0; i < n; i++) {
    int y, m, d;
    std::string ds, w;
    char c;
    std::cin >> y >> c >> m >> c >> d >> ds >> w;
    if (w == "Rain") {
      if (y < info.y) {
        info.y = y;
        info.m = m;
        info.d = d;
        info.ds = ds;
        info.w = w;
      }
      else if (y == info.y) {
        if (m < info.m) {
          info.y = y;
          info.m = m;
          info.d = d;
          info.ds = ds;
          info.w = w;
        }
        else if (m == info.m) {
          if (d < info.d) {
            info.y = y;
            info.m = m;
            info.d = d;
            info.ds = ds;
            info.w = w;
          }
        }
      }
    }
  }
  std::cout << info.y << "-" << (info.m < 9 ? "0" : "") << info.m << "-" << (info.d < 9 ? "0" : "") << info.d << " " << info.ds << " " << info.w;
  return 0;
}