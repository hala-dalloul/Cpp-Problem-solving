//
// Created by hp on 12/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin >> n>> m;
    int matrix[n][m];
    int current;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> matrix[i][j];
        }
    }
    cin >> current;
    bool flag = false;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if ( matrix[i][j] == current) {
                flag = true;
                break;
            }
        }
    }
    cout<<(flag?"will not take number":"will take number");
    return 0;
}
