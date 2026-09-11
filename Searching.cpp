//
// Created by hp on 10/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;
    ll index = -1;
    vector<ll> numbers(n);
    for (int i = 0; i < n; i++) cin >> numbers[i];
    ll x;
    cin >> x;
    for (int i = 0; i < n; i++) {
        if (numbers[i] == x){ index = i; break;}

    }
    cout << index;
    return 0;
}
