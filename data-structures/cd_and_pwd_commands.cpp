//
// Created by hp on 17/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<string> path;
    while (n--) {
        string s;
        cin >> s;
        if (s == "cd") {
            string x;
            cin >> x;

            if (!x.empty() && x[0] == '/') path.clear();

            stringstream ss(x);
            string a;
            while(getline(ss, a, '/')) {
                if (a.empty() || a == ".") continue;
                if (a == "..") {
                    if (!path.empty()) path.pop_back();
                } else {
                    path.push_back(a);
                }
            }
        }
        else if (s=="pwd") {
            if (path.empty()) {
                cout << "/\n";
            } else {
                for (const auto& p : path) cout << "/" << p;
                cout << "/\n";
            }
        }
    }
    return 0;
}