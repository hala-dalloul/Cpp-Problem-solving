//
// Created by hp on 14/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
// 3 4
// 2 2 2 2
// 3 2 1 2
// 4 1 2 1
    // 162
int t;
    cin >> t;
    while (t--){
        int n,m;
        cin>>n>>m;
        priority_queue<pair<ll,vector<ll>>> seq;
        while(n--) {
            ll key=0; /// all scour
            vector<ll> val(m); // prefix
            for(int i=0;i<m;i++) {
                cin >> val[i];
                key += val[i];
            }
            seq.push({key,val});
        }
        ll pref=0;
        vector<ll> x;
        while (!seq.empty()) {
            for (auto& i: seq.top().second) {
                pref += i;
                x.push_back(pref);
            }
            seq.pop();
        }
        cout << accumulate(x.begin(), x.end(), 0LL) <<"\n";
    }

    return 0;
}