//
// Created by hp on 21/10/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    string s;
    cin >> setw(n) >> s;
    string ans;
    bool ok = true;
    while (k--) {
        string x;
        cin >> x;
        ans += x;
        for (int i = 0; i < x.length(); i++) {
            if (s.find(x[i]) > s.length()) {
                ok = false;
                break;
            }

        }
    }
    if (ok) {
        vector<int> a(256,false);
       for (int i = 0; i < ans.length(); i++) {
           if (a[ans[i]+'a']) {
               ok = false;
               break;
           }else {
               a[ans[i]+'a'] = true;
           }
       }
    }
    if (ok) {
        cout <<"YES";
    }else {
        cout <<"NO";
    }



    return 0;
}

