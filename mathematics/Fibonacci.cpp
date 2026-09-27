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
    if (n == 1) {
        cout<< 0;
        return 0;
    }
    if (n == 2) {
        cout<< 1;
        return 0;
    }
    l prev = 0;
    l cur = 1;
    for (int i = 3; i <= n; i++) {
        l next = prev + cur;
        prev = cur;
        cur = next;
    }
    cout<< cur;
    return 0;
}