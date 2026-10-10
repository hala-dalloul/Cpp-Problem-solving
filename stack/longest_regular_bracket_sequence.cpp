//
// Created by hp on 7/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // )((())))(()())

    string s;
    cin >> s;
    stack<int> x;
    x.push(-1);
    int sum = 1,max_num=0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' ) {
            x.push(i);
        }else {
            x.pop();
            if (x.empty()) {
                x.push(i);
            }else {
                int len = i - x.top();
                if (len > max_num) {
                    max_num = len;
                    sum = 1;
                }
                else if (max_num == len) {
                    ++sum;
                }
            }
        }

    }
    cout << max_num<<" "<<sum << endl;

    return 0;
}