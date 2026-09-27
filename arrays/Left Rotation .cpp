//
// Created by hp on 27/9/2026.
 // 1 2 3 4 5
 // 2
// 3 4 5 1 2
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    deque<int> position;

    int n,d;
    cin>>n>>d;

    for (int i=1;i<=n;i++) {
        position.push_back(i);
    }
    for (int i=0; i<d; i++) {
        position.push_back(position[0]);
        position.pop_front();
    }

    for (int i=0; i<position.size(); i++) {
        cout<<position[i]<<" ";
    }


    return 0;
}