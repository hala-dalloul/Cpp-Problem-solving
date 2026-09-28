//
// Created by hp on 28/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

void n_times() {
    int times;
    char x;
    cin >> times >> x;
    while(times--) {
        cout << x << " ";
    }
    cout << "\n";
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    while(n--) {
        n_times();
    }
    return 0;
}