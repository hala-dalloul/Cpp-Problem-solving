//
// Created by hp on 23/8/2026.
//

#include <bits/stdc++.h>
using namespace std;

int gcf(int a, int b, int c) {
    if (b < a) {
        return -1;
    }
    if (a%c == 0) {
        return a;
    }
    return gcf(a+1, b, c);
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int result = gcf(a, b, c);
    cout << result << endl;
}
