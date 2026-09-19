//
// Created by hp on 19/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    vector<string> v;
    string current = "";
    int balance = 0;
    for (int i = 0; i < s.length(); i++) {
        current += s[i];

        if (s[i] == 'L')
            balance++;
        else
            balance--;

        if (balance == 0) {
            v.push_back(current);
            current = "";
        }
    }
    cout << v.size() << "\n";

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }
    return 0;
}