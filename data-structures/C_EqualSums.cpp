//
// Created by hp on 11/10/2026.
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin >> k;
    // key: new_sum
    // value: {sequence_index, element_index}
    unordered_map<int, pair<int,int>> mp;

    for (int i = 1; i <= k; i++) {
        int n;
        cin >> n;
        vector<int> v(n);
        int total = 0;
        for (int j = 0; j < n; j++) {
            cin >> v[j];
            total += v[j];
        }
        for (int j = 0; j < n; j++) {
            int new_sum = total - v[j];

            if (mp.count(new_sum)) {
                auto [pi, pj] = mp[new_sum];
                if (pi != i) {
                    cout << "YES\n";
                    cout << pi << " " << pj << "\n";
                    cout << i  << " " << j + 1 << "\n";
                    return 0;
                }
            } else {
                mp[new_sum] = {i, j + 1};
            }
        }
    }

    cout << "NO\n";
    return 0;
}