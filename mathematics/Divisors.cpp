//
// Created by hp on 15/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

    vector<int> div ;

     int n;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++) {
        cout << i << endl;
        if (n%i ==0) {
            div.push_back(i);
            if (i*i != n) div.push_back(n/i);
        }
    }

    for (int i = 0; i < div.size(); i++) {
        cout << div[i] << " ";
    }
    return 0;
}