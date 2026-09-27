//
// Created by hp on 14/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    for (int i = 0; i < q; i++) {
        string x;
        cin >> x;
        int e, f;
        char p;
        if (x == "substr") {
            cin >> e >> f;
            if (e > f)swap(e, f);
            cout << s.substr((e - 1), f - e + 1) << "\n";
        }
        if (x == "sort") {
            cin >> e >> f;
            if (e > f)swap(e, f);
            sort(s.begin() + e - 1, s.begin() + f);
        }
        if (x == "pop_back") {
            s.pop_back();
        }
        if (x == "back") {
            cout << s.back() << "\n";
        }
        if (x == "reverse") {
            cin >> e >> f;
            if (e>f)swap(e,f);
            reverse(s.begin() + e - 1, s.begin() + f);
        }
        if (x == "front") {
            cout << s.front() << "\n";
        }
        if (x == "push_back") {
            cin >> p;
            s.push_back(p);
        }
        if (x == "print") {
            cin >> e;
            cout << s[e-1] << "\n";
        }
    }
    return 0;
}
