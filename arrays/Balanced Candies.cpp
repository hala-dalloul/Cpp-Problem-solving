//
// Created by hp on 3/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    long long max_n = INT_MIN;
    vector<long long> a (n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        max_n = max (max_n, a[i]);
    }
    long long counter = 0;

    for (int i = 0; i < n; i++) {
        counter += max_n - a[i];
    }

    cout << counter ;

    return 0;
}