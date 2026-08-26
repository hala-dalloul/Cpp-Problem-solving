// Created by hp on 23/8/2026.

#include <bits/stdc++.h>
using namespace std;
vector<int> frq(10e6);

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    vector<int> arr(t);
    // 1 1 1 2 2 3 4 4 4 5 5 5 6 6 ans = 7
    for (int i = 0; i < t; i++) {
        int c;
        cin >> c;
        arr[i] = c;
        frq[arr[i]]++;
    }

    for (int i = 0; i < arr.size(); i++) {
        if (i < arr.size() - 1 && arr[i] == arr[i + 1]) {
            continue;
        }
        cout << arr[i] << " " << frq[arr[i]] << "\n";
    }
    return 0;
}
