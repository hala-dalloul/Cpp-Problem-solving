//
// Created by hp on 8/10/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        m[s]++;
        if (m[s] == 1) {
            cout<<"OK";
        }else if (m[s] > 1) {
            cout << s << (m[s]-1);
        }
        cout << "\n";
    }
    return 0;
}