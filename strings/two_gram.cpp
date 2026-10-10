//
// Created by hp on 8/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    string s;
    cin >> setw(t) >> s;
    map<string ,int> x;
    int max_count =0;
    string ans = "";
    for (int i = 0; i < s.length()-1; i++) {

        string a = s.substr(i,2);
        x[a]++;
        if (x[a] > max_count) {
            max_count = x[a];
            ans = a;
        }
    }
    cout << ans ;
    return 0;
}