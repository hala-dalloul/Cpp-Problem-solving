//
// Created by hp on 18/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    cin >> s;
    cin >> t;
    int sSize = s.size()-1;
    int tSize = t.size()-1;
    int maxSize = (s.size() > t.size() ? s.size() : t.size());

    while (maxSize--) {
        if (s[sSize] != t[tSize]) {
            break;
        }
        sSize--;
        tSize--;
    }

    cout << sSize + tSize +2 << endl;
    return 0;
}

// test
// west
