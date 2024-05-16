#include <iostream>
#include <string>

class OBJ {
  public:
    std::string code;
    char c;
    int time;
    OBJ (std::string code, char c, int time): code(code) {
      this->c = c;
      this->time = time;
    }
};

int main(void) {
  std::string code;
  char c;
  int t;
  std::cin >> code >> c >> t;
  OBJ a = OBJ(code, c, t);

  std::cout << "secret code : " << a.code << "\n";
  std::cout << "meeting point : " << a.c << "\n";
  std::cout << "time : " << a.time << "\n";

  return 0;
}