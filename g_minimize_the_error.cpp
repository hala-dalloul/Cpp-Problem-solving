//
// Created by hp on 13/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    // 2 5 7
    // 3 4
    // 14 4

    int size_arr, n, m;
    cin >> size_arr >> n >> m;
    vector<int> a(size_arr),xx(size_arr);
    for (int i = 0; i < size_arr; i++) cin >> a[i];
    vector<int> b(size_arr);
    for (int i = 0; i < size_arr; i++) cin >> b[i];

    priority_queue<int> pq;
    for (int i = 0; i < size_arr; i++) {
        pq.push(abs(a[i]-b[i]));
    }
    int r = n+m;
    while (r--) {
        int q  = pq.top();
        pq.pop();
        pq.push(abs(q - 1));
    }
    ll ans = 0;
    while (!pq.empty()) {
        ans += (ll)pq.top()*pq.top();
        pq.pop();
    }
    cout << abs(ans) ;

    return 0;
}
