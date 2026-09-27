//
// Created by hp on 2/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    int m,n;
    cin>> m>>n;
    int arr1[m], arr2[n];
    for (int i = 0; i < m; i++) cin>>arr1[i];
    for (int i = 0; i < n; i++) cin>>arr2[i];

    int j=0;
    for (int i = 0; i < m; i++) {
        if (arr1[i] == arr2[j]) {
            ++j;
        }
    }
    if (j==n) {
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }
}