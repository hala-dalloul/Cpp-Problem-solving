//
// Created by hp on 30/8/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    vector<int> a_array(a), b_array(b), ans;
    for (int i = 0; i < a_array.size(); i++) cin >> a_array[i];
    for (int i = 0; i < b_array.size(); i++) cin >> b_array[i];
    int i = 0, j = 0;
    while (i < a and j < b) {
        if (a_array[i] <= b_array[j]) {
            ans.push_back(a_array[i]);
            i++;
        } else {
            ans.push_back(b_array[j]);
            j++;
        }
    }
    while (i < a) {
        ans.push_back(a_array[i]);
        i++;
    }
    while (j<b) {
        ans.push_back(b_array[j]);
        j++;
    }

    for (int c = 0; c < ans.size(); c++) cout << ans[c] << " ";
    return 0;
}
