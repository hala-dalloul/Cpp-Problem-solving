//
// Created by hp on 12/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // 4 8
    // 2 7 5 1
    // 3 4 4 7
    int n,summation;
    cin>>n >> summation;
    map<int,int> arr;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;

        int diff = summation - x;
        auto it = arr.find(diff);
        if(it != arr.end()) {
            cout << (it->second+1)<<" "<< (i+1);
            return 0;
        }
        arr[x] = i;
    }
    cout << -1;
    return 0;
}
