//
// Created by hp on 9/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    stack<string> x;
    set<string> z;
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        x.push(s);
    }
    while (!x.empty()){
        string a = x.top();
        x.pop();
        if (z.find(a) == z.end()) {
            continue;
        }
        z.insert(a);
        cout << a << '\n';
    }
    return 0;
}
