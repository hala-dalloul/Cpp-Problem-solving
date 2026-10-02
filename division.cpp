//
// Created by hp on 2/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // For Division 1: 1900≤rating
    // For Division 2: 1600≤rating≤1899
    // For Division 3: 1400≤rating≤1599
    // For Division 4: rating≤1399
    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;
        if (x <= 1399) {
            cout << "Division 4" << "\n";
        }else if (1400 <=x and x<= 1599) {
            cout << "Division 3" << "\n";
        }else if (1600 <=x and x<= 1899) {
            cout << "Division 2" << "\n";
        }else if (1900 <= x) {
            cout << "Division 1" << "\n";
        }

    }

    return 0;
}