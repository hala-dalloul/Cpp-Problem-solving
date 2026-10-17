

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<ll> a(n);
    unordered_map<ll, int> cnt;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }

    int ans = 0;

    for (ll x : a) {
        bool good = false;

        for (int d = 0; d <= 31; d++) {
            ll power = 1LL << d;
            ll y = power - x;

            if (y < 1) continue;

            if (y == x) {
                if (cnt[x] >= 2) {
                    good = true;
                    break;
                }
            } else {
                if (cnt[y] > 0) {
                    good = true;
                    break;
                }
            }
        }

        if (!good) ans++;
    }

    cout << ans << '\n';
    return 0;
}