//
// Created by hp on 1/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, t;
    cin >> n >> t;
    vector<pair<int,int>> p;
    for(int i=0;i<n;i++) {
        int f;
        cin >> f;
        int rounds = (f + t - 1) / t;

        p.push_back({rounds, i});
    }


    auto x = max_element(p.begin(),p.end());
    cout <<  x->second+1 << "\n";


    return 0;
}