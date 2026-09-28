//
// Created by hp on 28/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

void new_array(int n) {
    vector<int> number_a(n);
    vector<int> number_b(n);

    for (int i = 0; i < n; i++) cin >> number_a[i];
    for (int i = 0; i < n; i++) cin >> number_b[i];


    for (int i = 0; i < number_b.size(); i++) {
        cout << number_b[i] << " ";
    }
    for (int i = 0; i < number_a.size(); i++) {
        cout << number_a[i] << " ";
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    new_array(n);

    return 0;
}
