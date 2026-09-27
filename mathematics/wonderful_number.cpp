//
// Created by hp on 28/8/2026.
//
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 10e9+9;
#define ll long long

void wonderful (ll n) {
    string x = bitset<32>(n).to_string();
    string result ;
    cout << x << endl;
    cout << result << endl;
    for (int i = x.length() - 1; i >= 0; i--) {
        if (x[i] == '0') {
            x.erase(i, 1);
        }else {
            result+= x[i];
        }
    }
    cout << x << endl;
    cout << result << endl;
}

int main () {
    ll n;
    cin >> n;
    if (n<= MAXN) {
        wonderful(n);
    }
    return 0;
}
