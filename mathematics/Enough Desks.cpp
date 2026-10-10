//
// Created by hp on 3/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio (false);
    cin.tie (0);
    cout.tie (0);

    int n;
    cin >> n;
    vector<long long> a (n);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long counter = 0;
    for (int i = 0; i < a.size(); i++) {

        if (a[i] % 2 == 0) {
            counter += a[i]/2;
        }else {
            if (a[i] == 1)
                counter++;
            else {
                counter += a[i]/2;
                counter++;
            }
        }
    }
    cout << counter;

    return 0;
}