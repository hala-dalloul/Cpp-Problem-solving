//
// Created by hp on 17/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
#define l long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n), b;
    l sum = 0,count = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        b.push_back(a[i]);

        if (sum < 0) {
            int mini = 0;
            for (int j = 0; j < b.size(); j++) {
                if (b[j] < b[mini]) {
                    mini = j;
                }
            }
            sum -= b[mini];
            b.erase(b.begin() + mini);
        }
    }
    cout << b.size();
    return 0;
}
