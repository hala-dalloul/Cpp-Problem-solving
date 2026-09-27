//
// Created by hp on 28/8/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    int result_a=0;
    int result_b=0;
    if (a >= 100 && a <= 999 && b >= 100 && b <= 999) {
        // a result
        result_a=a%10;
        a/=10;
        result_a+=a%10;
        a/=10;
        result_a+=a%10;
        // b result
        result_b=b%10;
        b/=10;
        result_b+=b%10;
        b/=10;
        result_b+=b%10;
    }
    cout<< (result_a > result_b ? result_a : result_b) << endl;
}