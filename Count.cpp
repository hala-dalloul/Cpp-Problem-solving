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
    cin >> s;
    long long sum = s[0]-'0' ;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] >= '0' and s[i] <= '9') {
            sum = sum+(s[i] - '0');
        }
    }
    cout << sum ;

    return 0;
}