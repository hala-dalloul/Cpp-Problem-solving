//
// Created by hp on 28/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

void swap_array(int n,int x,int y) {
    int arr[n][n];
    // input
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cin >> arr[i][j];
        }
    }
    // start swap
    // row
    for (int j = 0; j < n; j++) {
        int temp = arr[x][j];
        arr[x][j] = arr[y][j];
        arr[y][j] = temp;
    }
    for (int j = 0; j < n; j++) {
        int temp = arr[j][x];
        arr[j][x] = arr[j][y];
        arr[j][y] = temp;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, x,y;
    cin >> n >> x>>y;
    swap_array(n,x-1,y-1);
    return 0;
}