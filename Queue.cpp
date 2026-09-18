//
// Created by hp on 18/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    multiset<long long> x;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        x.insert(t);
    }
    long long sum = 0;
    long long counter = 0;
    for (int i = 0; i < n; i++) {
        if (sum <= *x.begin()) {
            sum += *x.begin();
            counter++;
            x.erase(x.begin());
        } else {
            x.erase(x.begin());
        }
    }
    cout << counter;
    return 0;
}
