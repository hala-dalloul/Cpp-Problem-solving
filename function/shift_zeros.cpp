//
// Created by hp on 28/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

void shiftZeros(int n) {
    vector<int> dq(n);
    int numberOfZeros = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 0) {
            numberOfZeros++;
            --i;
            --n;
            dq.pop_back() ;
        }else {
            dq[i] = x;
        }
    }
    for (int i = 0; i < numberOfZeros; i++) {
        dq.push_back(0);
    }
    for (int i=0;i<dq.size();i++) {
        cout << dq[i] << " ";
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    shiftZeros(n);
    return 0;
}