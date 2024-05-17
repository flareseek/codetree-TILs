#include <iostream>
#include <string>

class Info {
  public: 
    std::string date;
    std::string day;
    std::string weather;
};

int main(void) {
  Info info;
  info.date = "2101-01-01";
  
  int n;
  std::cin >> n;
  
  for (int i = 0; i < n; i++) {
    std::string date, day, weather;
    std::cin >> date >> day >> weather;
    if (weather != "Rain") continue;

    if (date < info.date) {
      info.date = date;
      info.day = day;
      info.weather = weather;
    }
  }
  std::cout << info.date << " " << info.day << " " << info.weather;
  return 0;
}