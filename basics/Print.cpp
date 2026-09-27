//
// Created by hp on 27/8/2026.
//

#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000;
void printFunction(int n) {
    if (n <= MAXN) {
        for (int i = 1; i < n+1; i++) {
            cout<<i;
        }
    }
}
int main() {
    int n;
    cin>>n;
    printFunction(n);
    return 0;
}

