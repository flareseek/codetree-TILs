#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;
    double arr[n] = {};
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
       sum += arr[i];
    }

    double avg = sum / n;
    std::cout << std::fixed;
    std::cout.precision(1);
    std::cout << avg << std::endl;
    if (avg >= 4.0) 
        std::cout << "Perfect";
    else if (avg >= 3.0)
        std::cout << "Good";
    else
        std::cout << "Poor";

    return 0;
}