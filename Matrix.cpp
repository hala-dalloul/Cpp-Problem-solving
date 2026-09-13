//
// Created by hp on 12/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int matrix[n][n];
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cin >> matrix[i][j];
        }
    }
    int mainDia = 0 ,secondaryDia = 0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (i==j) {
                mainDia += matrix[i][j];
            }
            if (j+i == (n-1)) {
                secondaryDia += matrix[i][j];
            }
        }
    }
    cout << abs(mainDia-secondaryDia);
    return 0;
}