//
// Created by hp on 11/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);


    for (int i = 0; i < n; i++) cin >> arr[i];
    int minN = arr[0];
    int index = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] < minN) {
            minN = arr[i];
            index = i+1;
        }

    }

    cout << minN << " " << index << endl;


    return 0;
}
