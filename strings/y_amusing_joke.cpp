//
// Created by hp on 17/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // SANTACLAUS
    // DEDMOROZ
    // SANTAMOROZDEDCLAUS
    string a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    map<char,ll> dic;

    for (int i = 0; i < a.size(); i++) {
        dic[a[i]]++;
    }
    for (int i = 0; i < b.size(); i++) {
        dic[b[i]]++;
    }

    for (int i = 0; i < c.size(); i++) {
        dic[c[i]]--;
    }
    bool is_valid = true;
    for (auto it: dic) {
        if (it.second != 0) {
            is_valid = false;
            break;
        }
    }
    cout << (is_valid ? "YES" : "NO");

    return 0;
}
