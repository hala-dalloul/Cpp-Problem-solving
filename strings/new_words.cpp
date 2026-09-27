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
    bool flag = true;
    vector<int> eygpt(256, 0);
    string x = "egypt";
    for (int i = 0; i < s.length(); i++) {
        int c = tolower(s[i]);
        if (c == 'e' || c == 'g' || c == 'y' || c == 'p' || c == 't') {
            eygpt[c - 'a']++;
        }
    }
   cout <<  min(eygpt['e'-'a'], min(eygpt['g'-'a'], min(eygpt['y'-'a'],min(eygpt['p'-'a'],eygpt['t'-'a']))));
    return 0;
}
