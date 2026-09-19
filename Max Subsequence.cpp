//
// Created by hp on 16/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    ans.push_back(s[0]);
    for (int i = 1; i <= s.length()-1; i++) {
        if (s[i] != s[i-1]) {
            ans.push_back(s[i]);
        }
    }
    // cout << ans;
    cout << ans.size();
    return 0;
}
