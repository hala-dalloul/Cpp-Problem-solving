//
// Created by hp on 28/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

void sortArray(int n) {
    priority_queue<int,vector<int> ,greater<>> pq;
    for (int i=0;i<n;i++) {
        int x;
        cin >> x;
        pq.push(x);
    }
    for (int i=0;i<n;i++) {
        cout << pq.top() << " ";
        pq.pop();
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // 4
    // 3 2 1 2
    int n;
    cin >> n;
    sortArray(n);


    return 0;
}