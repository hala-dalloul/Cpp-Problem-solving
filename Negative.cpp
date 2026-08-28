//
// Created by hp on 28/8/2026.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll a, b, c;
    cin >> a >> b >> c;

    vector<ll> y;
        if (a < 0) {
            y.push_back(a);
        } if (b < 0) {
            y.push_back(b);
        } if (c < 0) {
            y.push_back(c);
        }
    if (y.size() == 3) {
        cout << (max(y[0],max(y[1],y[2])));
    }else if (y.size() == 2) {
        cout << (max(y[0],y[1]));
    }else if (y.size() == 1) {
        cout << y[0];
    }else {
        cout << "0";
    }


    return 0;
}
