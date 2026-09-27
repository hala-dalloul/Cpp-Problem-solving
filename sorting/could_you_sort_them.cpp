//
// Created by hp on 28/8/2026.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> v = {a,b,c};
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}