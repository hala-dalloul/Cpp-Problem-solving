//
// Created by hp on 6/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool palindrome (string x) {
    for (int l=0;l<x.size();l++) {
        if (x[l] != x[x.size() - 1 - l]) {
            return false;
        }
    }
    return true;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    while (n--) {
        ll v;
        cin >> v;
        string x = to_string(v);
        while (!palindrome(x)) {
            v--;
            x = to_string(v);
        }
        cout << x << endl;


    }


    return 0;
}