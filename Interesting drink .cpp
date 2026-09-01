//
// Created by hp on 1/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;
    vector<int> v(k);
    for (int i = 0; i < k; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int x;
    cin >> x;

    while (x--) {
        int t;
        cin >> t;
        int l = 0, r = k - 1, flag = -1;

        while (l <= r) {
            int mid = (r + l) / 2;
            if (v[mid] <= t) {
                flag = mid+1;
                l=mid+1;
            }else {
                r= mid - 1;
            }
        }
        cout <<( (flag == -1)?0:flag)<< endl;
    }
    return 0;
}

/*
    5
    3 10 8 6 11
    4
    1
    10
    3
    11
 */
