//
// Created by hp on 13/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string input1, input2;
    cin >> input1;
    cin >> input2;
    if (input1 < input2) {
        cout << input1;
    } else {
        cout << input2;
    }
    return 0;
}
