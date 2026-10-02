//
// Created by hp on 2/10/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    bool is_hard = false;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) {
            is_hard = true;
            break;
        }
    }
    cout << (is_hard ? "HARD":"EASY");

    return 0;
}
