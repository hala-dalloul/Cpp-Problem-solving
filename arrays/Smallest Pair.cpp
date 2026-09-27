//
// Created by hp on 11/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
#define l long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;
        vector<l> arr(x);
        for (int i = 0; i < x; i++) { cin >> arr[i]; }
        l minV = LLONG_MAX;
        l minPre = arr[0]-0;

        for (int i = 1; i < x; i++) {
            l val = minPre + (arr[i] + i);
            minV = min(minV, val);
            minPre = min(minPre, arr[i]-i);
        }

        cout << minV << endl;
    }

    return 0;
}
