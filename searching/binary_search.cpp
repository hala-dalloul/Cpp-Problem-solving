//
// Created by hp on 30/8/2026.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

    int a,b;
    cin>>a>>b;
    vector<ll> a_array(a),b_array(b);
    for (int i=0;i<a;i++) cin>>a_array[i];
    for (int i=0;i<b;i++) cin>>b_array[i];
    int f=0;

    while (b--){
        ll target = b_array[b_array.size()-1 - b];
        int l = 0, r = a_array.size() - 1;
        while (l<=r) {
            int mid = (l+r)/2;
            // cout<<"mid:" << a_array[mid] << " "<<endl;
            if (a_array[mid] == target) {
                f =1;
                break;
            }
            if (target > a_array[mid]) {
                l = mid+1;
            }else {
                r = mid-1;
            }

        }
        if (f) {
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;

        }
        f = 0;

    }
    return 0;
}