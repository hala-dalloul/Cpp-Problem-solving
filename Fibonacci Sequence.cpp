//
// Created by hp on 18/9/2026.
//
#include <bits/stdc++.h>
#define l long long
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,operation = 0;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1) {
            cout<< 0;
            return 0;
        }
        if (n == 2) {
            cout<< 1;
            return 0;
        }
        l prev = 0;
        l cur = 1;
        l next = 0;
        for (int i = 3; i <= n; i++) {
            next = prev + cur;
            prev = cur;
            cur = next;
            operation += 2;
        }

    }
    string z = "";
    for (int i = 0; i < operation-1; i++) {
        z.insert(z.begin(), *"F");
        z.push_back(*"B");
    }
    cout << z ;
    return 0;
}