//
// Created by hp on 14/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin>>s;
    bool flage = true;
    for (int i = 0; i <s.length()/2; i++) {
        if (s[i] != s[s.length()-i-1]) {
            flage = false;
            break;
        }
    }
    cout<<(flage?"YES":"NO");

    return 0;
}
