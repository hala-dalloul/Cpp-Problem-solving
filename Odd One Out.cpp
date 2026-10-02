//
// Created by hp on 2/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie (0);

    int n;
    cin >> n;
    while (n--) {
        int a,b,c;
        cin >> a >> b >> c;
        if (a == b and a!=c) {
            cout << c << "\n";
        }else if (a == c and b!=c) {
            cout << b << "\n";
        }else if (c == b and c!=a) {
            cout << a << "\n";
        }
    }

    return 0;
}
