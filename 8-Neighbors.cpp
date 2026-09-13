//
// Created by hp on 13/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 0, m = 0;

    cin >> n >> m;
    // int matrix[n][m];

    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x = 0, y = 0;
    cin >> x >> y;
    x--,y--;
    bool ok = true;
    for (int i = -1; i <=1; i++) {
        for (int j = -1; j <=1; j++) {
            if (i == 0 && j == 0) continue;
            int nx = x+i;
            int ny = y+j;
            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (a[nx][ny] != 'x') {
                    ok = false;
                }
            }
        }
    }
    cout << (ok ? "yes" : "no") << '\n';

    return 0;
}