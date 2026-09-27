//
// Created by hp on 27/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int sum =0;
    int counter = 0;
    for(int i=0;i<n;i++) {
        if (v[i] + sum >= 0) {
            sum += v[i];
            counter++;
        }else {
            int min_n = v[i];
            for(int j=0;j<i-1;j++) {
                min_n=min(v[j],v[j+1]);
            }
            sum -= min_n;
            // counter --;
        }
    }
    cout<<counter;

    return 0;
}