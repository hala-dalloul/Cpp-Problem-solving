//
// Created by hp on 2/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    cin >> n;
    vector<int> v(n);
    int all_count = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        all_count+= v[i];
    }

    sort(v.rbegin(), v.rend());

    int new_sum = 0;
    int coins =0;
    for (int i = 0; i < n; i++) {
        new_sum += v[i];
        coins++;

        if (new_sum > all_count - new_sum) {
            break;
        }
    }
        cout << coins;
        return 0;

}