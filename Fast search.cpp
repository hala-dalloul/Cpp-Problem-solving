//
// Created by hp on 1/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {cin >> v[i];}
    int k;
    cin >> k;
    while (k--) {
        int left, right;
        cin >> left >> right;
        int l = 0,r=n-1;
        while (l <= r) {
            int mid = (l+r)/2;
            if (v[mid] >=left) {
                l = mid+1;
            }else if (v[mid] <=right) {
                r = mid-1;
            }
        }
    }

}