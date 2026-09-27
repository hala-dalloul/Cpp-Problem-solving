//
// Created by hp on 29/8/2026.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll x1, y1, r, x2, y2;
    cin >> x1 >> y1 >> r >> x2 >> y2;
// deferance
    ll dx = x2 - x1;
    ll dy = y2 - y1;

    ll distanceSquared = (dx * dx) + (dy * dy);
    r *= r;
    if (distanceSquared <= r) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
    return 0;
}
