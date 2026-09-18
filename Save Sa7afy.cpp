//
// Created by hp on 18/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    while (n--) {
        int t, init;
        cin >> t>> init;
        int count = 0;
        vector<int> dragons(t);
        for (int i = 0; i < t; i++) cin >> dragons[i];
        for (int i = 0; i < t; i++) {
            if (dragons[i] >= init) {
                int d = dragons[i];
                int prim = 2;
               while (d > 1) {
                   d = d/prim;
                   count += prim;
               }
            }
        }
        cout <<count<<"\n";
    }
}