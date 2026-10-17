//
// Created by hp on 11/10/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // 4
    // 5
    // 7 4 16 4 2
    // 4
    // 1 7 10 100
    // 3
    // 4 16 37
    // 3
    // 2 20 4

    int t;
    cin >> t;
    vector<int> arr(t);

    while (t--) {
        int m;
        cin >> m;

        map<int, int> freq;

        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;

            for (int step = 0; step < 100; step++) {
                int sum = 0;
                while (x > 0) {
                    int d = x % 10;
                    sum += d * d;
                    x /= 10;
                }
                x = sum;
            }

            freq[x]++;
        }
            long long ans = 0;
            for (auto &p: freq) {
                long long cnt = p.second;
                ans += cnt * (cnt - 1) / 2;
            }

            cout << ans << '\n';
    }


    return 0;
}
