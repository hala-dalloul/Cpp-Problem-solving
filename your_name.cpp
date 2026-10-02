//
// Created by hp on 2/10/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--) {
        int len;
        cin >> len;
        string s, s2;
        bool flag = true;
        cin >> setw(len) >> s >> setw(len) >> s2;
        sort(s.begin(), s.end());
        sort(s2.begin(), s2.end());
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != s2[i]) {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << "\n";
    }

    return 0;
}
