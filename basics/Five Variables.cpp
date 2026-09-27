//
// Created by hp on 29/8/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> n;
    int index=0;
    for (int i=0;i<5;i++) {
        int x;
        cin>>x;
        n.push_back(x);
        if (x == 0) {
            index = i+1;
            break;
        }
    }
    cout<<index<<endl;
    return 0;
}