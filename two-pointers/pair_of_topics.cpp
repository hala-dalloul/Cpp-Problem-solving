//
// Created by hp on 1/9/2026.
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i=0;i<n;i++) cin>>v[i];
    int k;
    cin>>k;
    sort(v.begin(),v.end());
    while (k--) {
        int border_l, border_r;
        cin>>border_l>>border_r;
        int index_l=n,index_r=n;

        int l=0,r=n-1;
        while (l<=r) {
            int mid=(l+r)/2;
            if (border_l<=v[mid]) {
                index_l=mid;
                r=mid-1;
            }else {
                l=mid+1;
            }
        }
        l=0,r=n-1;
        while (l<=r) {
            int mid=(l+r)/2;
            if (border_r<v[mid]) {
                index_r=mid;
                r=mid-1;
            }else {
                l=mid+1;
            }
        }
        cout<<index_r-index_l<<" ";
    }

    return 0;
}
