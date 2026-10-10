//
// Created by hp on 8/10/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < a.size(); i++) { c[i] = (a[i] - b[i]); }

    sort(c.begin(), c.end());
    int left = 0, right = c.size() - 1;
    long long ans = 0;

    while (left < right) {
        if (c[left] + c[right] > 0) {
            ans += right - left;
            right--;
        } else {
            left++;
        }
    }
    cout << ans;
    return 0;
}
