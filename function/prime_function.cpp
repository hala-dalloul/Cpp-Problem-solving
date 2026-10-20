//
// Created by hp on 17/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        bool ok = true;
        if (x < 2) {
            ok = false;  
        } else {
            for (int i = 2; i * i <= x; ++i) {
                if (x % i == 0) {ok = false;break;}
            }
        }
        cout << (ok?"YES":"NO") << endl;
    }
    return 0;
}