//
// Created by hp on 3/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double n,m;
    cin >> n >> m;
    long long x =( (13*n )- m)/5;
    long long y =(m-(8*n)) / 5;

    if (x < 0 || y < 0 ||
        (x + y) != (long long)n ||
        (8*x + 13*y) != (long long)m
        ) {
        cout << -1 << endl;
    } else {
        cout << x << " " << y << endl;
    }


    return 0;
}