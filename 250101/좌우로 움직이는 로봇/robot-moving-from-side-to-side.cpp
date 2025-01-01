#include <iostream>
#include <vector>

using namespace std;

int main() {
    int A, B;
    vector<int> aVector, bVector;
    aVector.push_back(0);
    bVector.push_back(0);
    cin >> A >> B;
    int t1;
    char t2;
    while(A--) {
        cin >> t1 >> t2;
        while(t1--) {
            aVector.push_back(aVector.back() + (t2 == 'R' ? 1 : -1));
        }
    }
    while(B--) {
        cin >> t1 >> t2;
        while(t1--) {
            bVector.push_back(bVector.back() + (t2 == 'R' ? 1: -1));
        }   
    }

    int aIndex = 0;
    int bIndex = 0;
    int aPrev = 0;
    int bPrev = 0;
    int aSize = aVector.size();
    int bSize = bVector.size();
    int count = 0;
    int i = 1;
    while(true) {
        aIndex = i < aSize ? i : (aSize - 1);
        bIndex = i < bSize ? i : (bSize - 1);
        aPrev = i >= aSize ? aIndex : aIndex - 1;
        bPrev = i >= bSize ? bIndex : bIndex - 1;
       
        if (aVector[aPrev] != bVector[bPrev] && aVector[aIndex] == bVector[bIndex]) count ++;
        if (aIndex == (aSize-1) && bIndex == (bSize-1)) break;
        i++;
    }
    
    cout << count;

    return 0;
}