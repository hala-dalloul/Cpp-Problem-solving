//
// Created by hp on 9/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
const int N=10e3+5;
int a[N];
int main() {
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
    // for (int i=0;i<n;++i) cin >> a[i];
    // for(int i=0;i<n;++i) {
    //     for (int j=0;j<n-1; ++j) {
    //         if (a[j]>a[j+1]) {
    //             swap(a[i],a[j]);
    //         }
    //     }
    // }
    //
    // for(int i=0;i<n;i++) {
    //     cout<<a[i]<<" ";
    // }
}