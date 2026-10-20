//
// Created by hp on 17/10/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    string t;
    cin >> t;

    bool flag = true;
    if (s.length() != t.length()) {
        flag = false;
    } else {
        int i1 = 0, i2 = t.length() - 1;
        while (i1 < s.length() and i2 >= 0) {
            if (s[i1] != t[i2]) {
                flag = false;
                break;
            }
            i1++;
            i2--;
        }
    }
    cout << (flag ? "YES" : "NO");
    return 0;
}
