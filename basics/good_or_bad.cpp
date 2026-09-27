//
// Created by hp on 14/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    while (n--) {
        string s;
        cin>> s;
        bool f = (s.find("101")!= string::npos)||(s.find("010")!= string::npos);
        cout << (f?"Good":"Bad")<<"\n";
    }
    return 0;
}