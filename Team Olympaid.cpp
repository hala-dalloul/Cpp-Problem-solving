//
// Created by hp on 26/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

// 7
// 1 3 1 3 2 1 2

// 3 5 7
// 6 7 4
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> x;
    vector<int> position_1,position_2,position_3;
    for (int i = 0; i < n; i++) {
        int v ;
        cin >> v ;
        if (v == 1) {
            position_1.push_back(i+1);
        }else if (v == 2) {
            position_2.push_back(i+1);
        }else if (v == 3) {
            position_3.push_back(i+1);
        }
    }
    int min_size = min(position_1.size(), min(position_2.size(), position_3.size()));
    cout << min_size << "\n";
    for (int i = 0; i < min_size; i++) {
        cout << position_1[i] << " "<< position_2[i] << " "<< position_3[i] << "\n";
    }

    return 0;
}