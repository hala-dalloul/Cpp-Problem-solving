//
// Created by hp on 9/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    char arr[n];
    int sum = 0;

    for (int i=0;i<n;i++) {
        cin >> arr[i];
        // cout << arr[i] << endl;
        sum += arr[i]-'0';
    }
    cout << sum << endl;
    return 0;
}