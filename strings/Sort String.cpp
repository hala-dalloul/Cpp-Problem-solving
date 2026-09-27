//
// Created by hp on 16/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >>n;
    int freq[26]= {0};
    char s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        freq[s-'a']++;
    }

    for (int i = 0; i < 26; i++) {
        while (freq[i]>0) {
            cout << static_cast<char>(i + 'a');
            freq[i]--;
        }
    }
    return 0;
}