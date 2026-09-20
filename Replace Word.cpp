//
// Created by hp on 20/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    string s;
    cin >> s;

    // EGYPT = 5

    int pos = 0;
    while ((pos = s.find("EGYPT", pos)) != string::npos) {
        s.replace(pos,5," ");
        pos += 1;
    }
    cout << s;

    return 0;
}