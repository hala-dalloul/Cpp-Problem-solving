//
// Created by hp on 1/10/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n),pos(n+1);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            pos[a[i]] = i;
        }

        vector<int> ans;
        int target = n;
        while (target >=1) {
            for (int i = pos[target]; i < n; i++) {
                if (a[i] == -1) {break;}
                ans.push_back(a[i]);
                a[i] = -1;

            }
            target--;

        }
        for (int i:ans) {
            cout << i << " ";
        }
        cout << "\n";

    }
    return 0;
}
