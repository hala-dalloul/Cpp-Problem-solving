//
// Created by hp on 27/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //
    string z = "(()()())";
    stack<string> x;
    for (int i = 0; i < z.size(); i++) {
        if (z[i] == '(') {
            x.push("(");
        }else if (z[i] == ')') {
            x.pop();
        }
    }
    if (x.size() > 0) {
        cout << "not perfect stack";
    }else {
        cout << "perfect stack";
    }
    return 0;
}