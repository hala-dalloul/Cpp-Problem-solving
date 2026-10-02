//
// Created by hp on 2/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n--) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if (a == b and b == c and c == d) {
            cout<< "YES"<<"\n";
        }else {
            cout<< "NO"<<"\n";
        }
    }

    return 0;
}