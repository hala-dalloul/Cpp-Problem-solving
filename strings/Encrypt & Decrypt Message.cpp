//
// Created by hp on 20/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    int n;
    cin >> n;
    string s;
    cin >> s;
    string out = "";
    if (n == 1) {
        for (int i=0; i<s.length(); i++) {
                int xx = Original.find(s[i]);
                out.push_back(Key[xx]);
        }
    }
    if (n ==2) {
        for (int i=0; i<s.length(); i++) {
            int xx = Key.find(s[i]);
            out.push_back(Original[xx]);
        }
    }

    cout << out;
    return 0;
}