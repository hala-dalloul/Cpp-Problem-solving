//
// Created by hp on 9/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int n,m;
    cin >> n>>m;
    int mid=0 ;
    ll arr[n];
    for (int i=0;i<n;i++) cin >> arr[i];
    int f=-1;
    for (int i=0;i<m;i++){
        int x;
        cin >> x;
        int l=0,r=n-1;
        while (l<=r) {
            mid = (l+r)/2;
            if (arr[mid]==x) {
                f=mid;
                break;
            }
            if (arr[mid] <x) {
                l=mid+1;
            }else {
                r=mid-1;
            }
            f=-1;
        }
        cout << f<< endl;
        f=-1;
    }

}