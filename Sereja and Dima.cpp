//
// Created by hp on 23/8/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> v(t);
    int a_player = 0;
    int b_player = 0;

    for (int i = 0; i < t; i++) {
        int c;
        cin >> c;
        v[i] = c;
    }
    int index = 0;
    int start = 0;
    int end = v.size() - 1;

    while (start <= end) {
        if (v[start] > v[end]) {
            if (index == 0) {
                a_player += v[start];
            } else {
                b_player += v[start];
            }
            start++;
        } else {
            if (index == 0) {
                a_player += v[end];
            } else {
                b_player += v[end];
            }
            end--;
        }
        index = 1-index;
    }
    cout << a_player << " "<< b_player << endl;
}
