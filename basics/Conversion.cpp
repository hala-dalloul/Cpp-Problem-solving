//
// Created by hp on 14/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if (islower(s[i])) {
            cout << (char)toupper(s[i]);
        }else if (isupper(s[i])) {
            cout << (char)tolower(s[i]);
        }else if (s[i]==',') {
            cout <<" ";
        }
    }

    return 0;
}