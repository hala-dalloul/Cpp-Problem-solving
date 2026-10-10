//
// Created by hp on 3/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    if (n <= 2) {
        cout << n*15;
    }else {
        cout << 0;
    }
    return 0;
}