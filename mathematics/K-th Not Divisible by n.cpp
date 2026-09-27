//
// Created by hp on 2/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long skipped = (k - 1) / (n - 1);

        cout << k + skipped << "\n";
    }
    return 0;
}