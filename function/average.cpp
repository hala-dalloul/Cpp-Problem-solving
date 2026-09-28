//
// Created by hp on 28/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

double average(int n) {
    double sum = 0;
    double x = n;
    while (n--) {
        double number;
        cin >> number;
        sum += number;
    }
    return sum / x;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    cout <<fixed << setprecision(6) << average(n);
    return 0;
}