//
// Created by hp on 25/8/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int> p(2 * n + 1, 0);
    vector<bool> used(2 * n + 1, false);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int val;
            cin >> val;
            cout << "val "  <<val << endl;
            p[i + j] = val;
            cout <<"i+j"<< i+j << p[i+i] << endl;
            used[val] = true;
            cout <<"used"<< used[val] << endl;
        }
    }

    // for (int i = 1; i <= 2 * n; ++i) {
    //     cout << p[i] << (i == 2 * n ? "" : " ");
    // }
    // cout << "\n";
}