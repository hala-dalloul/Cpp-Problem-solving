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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> ans(n);
        bool ok = true;

        for (int i = n; i >= 1; i--) {
            int pos = -1;

            for (int j = 0; j < n; j++) {
                if (a[j] == i) {
                    pos = j;
                    break;
                }
            }
            if (pos >= i) {
                ok = false;
                break;
            }

            int d;
            if (pos == i - 1) d = 0;
            else d = pos + 1;

            ans[i - 1] = d;
            if (d > 0) {
                vector<int> old = a;
                for (int j = 0; j < i; j++) {
                    a[j] = old[(j + d) % i];
                }
            }
        }

        if (!ok) {
            cout << -1 << '\n';
        } else {
            for (int i = 0; i < n; i++) {
                cout << ans[i] << " \n"[i == n - 1];
            }
        }
    }

    return 0;
}
