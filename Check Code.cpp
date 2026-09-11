//
// Created by hp on 11/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    bool f = true;
    if (a+b+1 == s.length() and a == s.find('-')) {
        for (int i=0;i<a+b+1;i++) {
            if (i == a) continue;
            if (!(s[i] >= '0' and s[i] <= '9')) f = false;
        }

    }else {
        f=false;
    }
    cout<<(f?"Yes":"No");
    return 0;
}
//48 -> 0
//57 -> 9