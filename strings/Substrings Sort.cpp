//
// Created by hp on 2/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++) cin >> s[i];

    for (int j = 0; j < n; j++) {
        for (int i = 1; i < n; i++) {
            if (s[i].size() < s[i - 1].size()) {
                swap(s[i - 1], s[i]);
            }
        }
    }
    int ok = 1;
    for (int i = 0; i < n - 1; i++) {
        string current = s[i];
        string next = s[i + 1];

        int f=0;
        for (int j = 0; j+current.size() <= next.size(); j++) {
            if (next.substr(j, current.size()) == current) {
                f = 1;
                break;
            }
        }
        if (!f) {
            ok=0;
            break;
        }
    }

    if (ok) {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++) cout << s[i] << endl;
    } else {
        cout << "NO" << endl;
    }
}
