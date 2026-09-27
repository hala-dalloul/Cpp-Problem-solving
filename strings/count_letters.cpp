//
// Created by hp on 14/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    vector<int> letters(256,0);
    for (char c : s) {
        letters[c - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (letters[i] > 0) {
            cout << static_cast<char>(i+'a')<< " : "<< letters[i] << endl;
        }
    }

    return 0;
}