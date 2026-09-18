//
// Created by hp on 17/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    getline(cin,s);
    int n = s.length();
    int i = 0;
    bool first = true;
    while (i<n) {
        int start = i;
        while (i<n&&s[i] != ' ') {
            i++;
        }
        string w = s.substr(start, i-start);
        reverse(w.begin(), w.end());
        if (!first) {
            cout << " ";
        }
        cout << w;
        first = false;
        i++;
    }
    return 0;
}
