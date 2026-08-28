//
// Created by hp on 28/8/2026.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll x;
    cin >> x;
    x %= 100;

    ll r = 0;
    if (x > 9 || x < 100) {
        r = x % 10;
        x/=10;
        r += (x % 10);
    }

    cout << r;

    return 0;
}
