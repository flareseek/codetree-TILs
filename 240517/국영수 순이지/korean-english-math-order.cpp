#include <iostream>
#include <string>
#include <algorithm>

class Student {
    public:
        std::string name;
        int k;
        int e;
        int m;
};

bool comparator(const Student& a, const Student& b) {
    if (a.k == b.k){
        if (a.e == b.e) {
            return a.m > b.m;
        }
        return a.e > b.e;
    }
    return a.k > b.k;
}

int main(void) {
    int n;
    Student students[10];
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> students[i].name >> students[i].k >> students[i].e >> students[i].m;
    }
    std::sort(students, students + n, comparator);
    for (int i = 0; i < n; i++) {
        std::cout << students[i].name << " " << students[i].k << " " << students[i].e << " " << students[i].m << "\n";
    }
    
    return 0;
}