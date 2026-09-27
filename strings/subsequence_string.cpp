//
// Created by hp on 15/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    string h = "hello";

    // ahhellllloou
    cin >> s;
    int index = 0;
    while (index < s.length() ) {
        if (s[index] == h[index]) {
            index++;
        }else {
            s.erase(index,1);
        }
    }
    if (s == h) {

        cout << "YES";
    }else {
        cout << "NO";
    }
    return 0;
}