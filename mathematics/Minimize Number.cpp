//
// Created by hp on 11/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
#define l long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<l> ans(n);
    int sum = 0;
    bool f = true;
    for (int i = 0; i < n; i++) cin >> ans[i];
    while (true){
        bool allEven = true;

        for (int i = 0; i < n; i++) {
            if (ans[i] % 2 != 0) {
                allEven = false;
                break;
            }
        }

        if (!allEven) break;

        for (int i = 0; i < n; i++) {
            ans[i] /= 2;
        }

        sum++;

    }

    cout << sum;
    return 0;
}