//
// Created by hp on 24/8/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t , s;
    cin >> t >> s;
    vector<int> arr(t);
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int l = 0,r = arr.size() - 1;
    while (l<r) {
        if (s > arr[l]+arr[r]) {
            l++;
        }
        if (s < arr[l]+arr[r]) {
            r--;
        }
        if (s == arr[l]+arr[r]) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}