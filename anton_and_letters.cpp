//
// Created by hp on 2/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 97 -> 122

    string s;
    cin >> s;
    int count =0;
    int freq[26] = {0};
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' || s[i] <= 'z') {
            freq[s[i]-'a']++;
        }
    }
    for (int i = 0; i < s.length(); i++) {
        cout << freq[s[i]] << endl;
        if (freq[s[i]] > 0) {
            ++count;
        }
    }

    cout <<count << endl;

    return 0;
}