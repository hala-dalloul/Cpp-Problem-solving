//
// Created by hp on 29/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    string seq;
    vector <int> v(n);
    cin >> seq;
    int time , coordinates  = INT_MAX;
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }
    for (int i = 1; i < seq.length(); i++) {
        if (seq[i-1] == 'R' && seq[i] == 'L') {
            time = (v[i] - v[i-1]) / 2;
            coordinates = min(coordinates, time);
        }
    }

    if (coordinates == INT_MAX)
        cout << -1;
    else
        cout << coordinates;

    return 0;
}