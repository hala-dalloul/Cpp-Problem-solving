//
// Created by hp on 12/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b,n;
    cin >> a >> b>>n;
    if (a+b >= n) {
        cout << "YES";
    }else {
        cout<<"NO";
    }

    return 0;
}