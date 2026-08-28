//
// Created by hp on 28/8/2026.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll result=0;

    ll k = n / 2;
    result = k * (k + 1);
    
    cout << result;
    return 0;
}
