//
// Created by hp on 10/9/2026.
//

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) {
        if (arr[i] <=10) {
            cout <<"A["<<i<<"] = "<< arr[i] << endl;
        }
    }
    return 0;
}