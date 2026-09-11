//
// Created by hp on 11/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0;i < n;i++) {
            cin >> v[i];
        }
        bool f = true;
        for (int i = 0;i < n;i++) {
            int mx = v[i];
            for (int j = i;j < n;j++) {
                mx = max(mx,v[j]);
                if (!f) {
                    cout << " ";
                }
                cout << mx;
                f = false;
            }
        }
        cout << "\n";

    }

    return 0;
}