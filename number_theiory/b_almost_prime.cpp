//
// Created by hp on 16/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<pair<int, int> > factorize(int n) {
    vector<pair<int, int> > factors;
    for (int i = 2; i * i <= n; ++i) {
        int power = 0;
        while (n % i == 0) {
            ++power;
            n /= i;
        }
        if (power > 0)
            factors.emplace_back(i, power);
    }
    if (n != 1)
        factors.emplace_back(n, 1);
    return factors;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int ans = 0;

    for (int i = 1; i <= n; ++i) {
        vector<pair<int, int>> factors = factorize(i);
        if (factors.size() == 2) {
            ++ans;
        }
    }

    cout << ans << endl;
    return 0;
}
