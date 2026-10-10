//
// Created by hp on 8/10/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;
    deque<char> text;
    // hhoowaaaareyyoouu
    for (int i = 0; i < s.length(); i++) {
        if (!text.empty() && text.back() == s[i]) {
            text.pop_back();
        }else {
            text.push_back(s[i]);
        }
    }
     while (!text.empty()) {
        cout << text.front();
        text.pop_front();
    }
    return 0;
}