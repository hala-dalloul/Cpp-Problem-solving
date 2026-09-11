//
// Created by hp on 11/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    long long arr[n];
    bool f = false;
    for (int i = 0; i < n; i++) cin >>arr[i];
    for (int i = 0; i < n/2; i++) {
        if (!(arr[i] == arr[n-i-1])) {
            f = true;
            break;
        }
    }
    if (f) {
        cout << "NO";
    }else {
        cout << "YES";
    }
    return 0;
}