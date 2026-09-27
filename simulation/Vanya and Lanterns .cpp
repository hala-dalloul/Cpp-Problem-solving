//
// Created by hp on 2/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, l;
    cin >> n >> l;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());
    double maximum = max(v[0], l - v[n - 1]);

    for (int i = 0; i < n - 1; i++) {
        double prev = (v[i + 1] - v[i]) / 2.0;
        maximum = max(maximum,prev);
    }
    cout << fixed << setprecision(10) << maximum << endl;
    return 0;
}
