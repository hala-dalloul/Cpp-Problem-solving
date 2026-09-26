//
// Created by hp on 20/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    string x_init = s.substr(0, 1);
    string y_init = s.substr(1);
    sort(x_init.begin(), x_init.end());
    sort(y_init.begin(), y_init.end());
    string minN = x_init + y_init;
    for (int i = 1; i < s.length(); i++) {
        string x = s.substr(0,i);
        string y = s.substr(i);
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        if (x + y < minN) {
            minN = x + y;
        }
    }
    cout << minN;
    return 0;
}