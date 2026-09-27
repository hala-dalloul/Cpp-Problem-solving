//
// Created by hp on 26/8/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s,n;
    cin >> s >> n;
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        cin >> v[i].second;
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        if (v[i].first >= s) { // lose
           cout << "NO" << endl;
            return 0;
        }else { // win
            s+= v[i].second;
        }
    }
    cout <<"YES"<< endl;
    return 0;

}