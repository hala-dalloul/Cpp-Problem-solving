//
// Created by hp on 30/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int no_of_stairways = 1;
    int s;
    vector<int> steps(n);
    for (int i = 0; i < n; i++) cin >> steps[i];

    for (int i = 1; i < n; i++) {
        if (!steps.empty()) {
            if (steps[i]==1 ) {
                no_of_stairways++;
            }
        }
    }
    cout << no_of_stairways << "\n";
    for (int i = 1; i < n; i++) {
        if (!steps.empty()) {
            if (steps[i]==1) {
                cout << steps[i-1] <<" ";
            }
        }
    }
    cout << steps[steps.size()-1] << "\n";

    return 0;
}