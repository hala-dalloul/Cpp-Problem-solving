//
// Created by hp on 3/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
const long long N = 10e5 + 5;

int main() {
    int n, k;
    cin >> n >> k;
    int v[n];
    int count=0;
    vector<bool> visit(N, false);
    vector<int> s;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (visit[v[i]] == false) {
            s.push_back(i+1);
            visit[v[i]] = true;
            count++;
        }
    }
    if (count >= k) {
        cout << "YES" << endl;
        for (int j = 0; j < k; j++) {
        cout << s[j]<<" ";
    }
    }else {
        cout<<"NO"<<endl;
    }

    return 0;
}
