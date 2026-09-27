//
// Created by hp on 25/8/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    string s;
    cin >> t;
    while (t--) {
        int max_size=0;
        cin >> s;
        for (const char i : s) {
            max_size = max(i-96, max_size);
        }
        cout << max_size << endl;
    }
}