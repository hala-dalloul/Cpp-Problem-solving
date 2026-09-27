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
    cin >> n;
    int sum = 0,counter = 0;
    priority_queue<int, vector<int>, greater<>> pq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
        pq.push(x);
        ++counter;
        if (sum < 0) {
            --counter;
            sum -= pq.top();
            pq.pop();
        }

    }
    cout << counter;


    return 0;
}