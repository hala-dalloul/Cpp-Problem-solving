//
// Created by hp on 7/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string c;
    cin >> c;
    stack<char> x;
    int sum = 0;
    for (int i=0;i<c.size();i++) {
        if (c[i] == '(') {
            x.push(c[i]);
        }else if (c[i] == ')') {
            if (!x.empty()) {
                sum +=2;
                x.pop();
            }
        }
    }
    cout << sum;

    return 0;
}