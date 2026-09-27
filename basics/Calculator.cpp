//
// Created by hp on 28/8/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b;
    cin >> a>>b;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << ((b>0)?a / b:0)<< endl;
    cout << a << " % " << b << " = " << a % b << endl;
    return 0;
}
