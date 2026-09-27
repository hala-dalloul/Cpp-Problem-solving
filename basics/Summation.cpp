//
// Created by hp on 10/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;
    long long sum=0;
    long long number;
    for (int i=0;i<x;i++){
        cin >> number;
        sum+=number;

    }
    cout << abs(sum);
    return 0;
}