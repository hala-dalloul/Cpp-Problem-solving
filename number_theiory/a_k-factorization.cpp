//
// Created by hp on 16/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, k;
    cin >> n >> k;
    if (k == 1) {
        cout << n << '\n';
        return 0;
    }
    vector<ll> numbers;
    for (ll i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            numbers.push_back(i);
            n /= i;
        }
    }
    if (n != 1) {
        numbers.push_back(n);
    }

    if (numbers.size() < k) {
        cout << -1;
        return 0;
    }
    vector<ll> ans;

    for (ll i = 0; i < k - 1; i++) {
        ans.push_back(numbers[i]);
    }
    ll last = 1;
    for (ll i = k - 1; i < numbers.size(); i++) {
        last *= numbers[i];
    }
    ans.push_back(last);

    for (ll x: ans) {
        cout << x <<' ';
    }
    return 0;
}
