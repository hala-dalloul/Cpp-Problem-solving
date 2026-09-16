//
// Created by hp on 16/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    getline(cin, s);
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ' && s[i] != '!' && s[i] != '.' &&
             s[i] != '?' && s[i] != ',' &&
             (i == 0 ||
              s[i - 1] == ' ' || s[i - 1] == '!' ||
              s[i - 1] == '.' || s[i - 1] == '?' ||
              s[i - 1] == ',')) {
            sum ++;
        }
    }
    cout << sum;
    return 0;
}
