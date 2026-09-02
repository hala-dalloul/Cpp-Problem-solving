//
// Created by hp on 2/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int> v(n), pref(n);
    for (int i=0; i<n; i++) {
        cin>>v[i];
        if (i == 0) {
            pref[i]=v[i];
        }else {
            pref[i] = pref[i-1] + v[i];
        }
    }

    int m;
    cin >> m;
    while (m--) {
        int x;
        cin >> x;
        int index = lower_bound(pref.begin(), pref.end(),x)-pref.begin();
        cout<<index+1<<endl;
    }


    return 0;
}
