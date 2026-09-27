//
// Created by hp on 11/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    int minIndex = 0;
    int maxIndex = 0;
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < n; i++) {
        if (v[i] < v[minIndex]){ minIndex = i;}
        if (v[i] > v[maxIndex]){ maxIndex = i;}
    }
    swap(v[minIndex], v[maxIndex]);
    for (int i = 0; i < n; i++) cout << v[i] << " ";

    return 0;
}
