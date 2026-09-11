//
// Created by hp on 10/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    long long number = 0;
    if (n >=2 and n <= 1000) {
        while (n >= 1) {
            cin >> number;
            if (number > 0) {
                // pos
                cout << 1<< " ";
            }else if (number < 0) {
                //neg
                cout << 2 << " ";
            }else {
                cout << 0 << " ";
            }
            n--;
        }
    }
    return 0;
}