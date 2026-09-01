//
// Created by hp on 1/9/2026.
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin>>n;
    vector<string> v(n),ans;
    unordered_set<string> vist;
    for (int i=0;i<n;i++) {
        cin>>v[i];
    }

    for (int i=0;i<n;i++) {
        if (vist.find(v[i]) == vist.end()) {
            ans.push_back(v[i]);
            vist.insert(v[i]);
        }
    }
    sort(ans.begin(),ans.end());
    for (int i=n-1;i>=0;i--) {
        cout<<ans[i]<<endl;
    }
}
