//
// Created by hp on 12/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<int> a(n);
    vector<int> b(n);

    bool f ;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i=0;i<n;i++) {
        if (a[i] != b[i]) {
            f = false;
            break;
        }
        f = true;
    }
    cout<<(f ? "yes":"no")<<endl;
    return 0;
}