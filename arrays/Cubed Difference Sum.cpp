//
// Created by hp on 3/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;
        vector<int> v(m);
        for (int i = 0; i < m; i++) cin >> v[i];
        long long sum = 0;
        for (int i=0;i<v.size()-1;i++) {
            sum += pow(v[i]-v[i+1],3);
        }
        cout << (sum*pow(10,7)+7) << "\n";
    }

    return 0;
}