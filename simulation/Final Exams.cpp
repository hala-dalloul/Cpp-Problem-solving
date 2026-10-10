//
// Created by hp on 3/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie (0);
    cout.tie (0);

    double n,m,k;
    // n -> studying;
    // m -> playing
    // k -> session
    cin >> n >> m >> k;

    vector<double> v(n+m);
    double i_n = 0;
    double i_m = 0;
    for (int i = 0; i < n+m; i++) {
        if (i%2 == 0) {
            v[i] = i_n+1;
            i_n++;
        }
        else {
            v[i] = i_m+1;
            i_m++;
        }
    }
    cout << max(i_n,i_m);


    return 0;
}
