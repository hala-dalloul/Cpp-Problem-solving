//
// Created by hp on 13/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    vector<bool> v(256,false);
    int counter = 0;
    for (int i = 0; i < s.length(); i++) {
        char current_char = s[i];
        if (v[current_char] == false) {
            v[current_char] = true;
            counter++;
        }
    }
    if (counter%2 == 0) {
        cout << "CHAT WITH HER!";
    }else {
        cout<<"IGNORE HIM!";
    }
    return 0;
}