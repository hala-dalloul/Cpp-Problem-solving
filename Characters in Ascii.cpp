//
// Created by hp on 28/8/2026.
//
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    char ascii;
    cin >> ascii;
    if (ascii >= 'A' && ascii <= 'Z') {
        cout << "capital "<< ascii-'A' << endl;
    } else if (ascii >= 'a' && ascii <= 'z') {
        cout << "small "<< ascii-'a' << endl;
    } else if (ascii >= '0' && ascii <= '9') {
        cout << "digit";
    } else if ((ascii >= '!' && ascii <= '/')
        || (ascii >= ':' && ascii <= '@')
        || (ascii >= '[' && ascii <= '`')
        || (ascii >= '{' && ascii <= '~')) {
        cout << "symbol";
    }
}
