//
// Created by hp on 29/8/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    vector<int> v(n),vist(10e5+5), ans;
    for (int i=0;i<n;i++) {
        cin>>v[i];
    }
    int i = 0, j=1,f=1;
    while (i<=n and j<=n) {
        if (v[i] == v[j] ) {
            if (!vist[v[i]]){
                ans.push_back(v[i]);
                vist[v[i]] = 1;
                j++;
            }else {
                f=1;
            }
        }else {
            if (!vist[v[i]]) {
                ans.push_back(v[i]);
            }
            i =j;
            j++;
            f=0;
        }
        if (f) {
            j++;
        }


    }
    cout<<endl;
    for (int i=0;i<ans.size();i++) {
        cout<<ans[i]<<" ";
    }

    // string x;
    // cin >> x;
    // for (int i = 0; i < (x.length()/2)+1; i++) {
    //
    //     if (x[i] != x[x.length()-i-1]) {
    //         cout << "No";
    //         return 0;
    //     }
    // }
    // cout << "YES";
    return 0;
}