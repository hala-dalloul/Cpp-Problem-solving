//
// Created by hp on 14/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,q;
    cin >> n>>q;
    string s;
    getline(cin,s);
    if (s.length() > n) {
        s=s.substr(0, n);
    }
    for (int i = 0; i < q; i++) {
        string x;
        getline(cin,x);

        if (x.empty()) {
            i--;
            continue;
        }

        if (x.find("substr") != string::npos) {
            cout << s.substr(stoi(x.substr(7, 1)), stoi(x.substr(9, 1))) << "\n";
        }
    }


    return 0;
}

