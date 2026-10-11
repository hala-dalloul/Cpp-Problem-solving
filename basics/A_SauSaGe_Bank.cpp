//
// Created by hp on 11/10/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    // 2x$

    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        long long ans = (1LL << (n - k + 1)) + 2LL * (k - 1);
        cout << ans << "\n";
    }

    return 0;
}
