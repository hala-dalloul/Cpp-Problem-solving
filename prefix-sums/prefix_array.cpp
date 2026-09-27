//
// Created by hp on 24/8/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, q;
    cin >> t >> q;
    vector<int> arr(t), prefix(t+2);

    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    prefix[0] = arr[0];
    for (int i = 1; i < t; i++) {
        prefix[i] += (prefix[i-1] + arr[i]);
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--, r--;
        if (l > 0 ) {
            cout << prefix[r] - prefix[l - 1] << endl;
        }else {
            cout << prefix[r]<< endl;
        }
    }
}
