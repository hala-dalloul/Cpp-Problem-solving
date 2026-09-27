//
// Created by hp on 29/8/2026.
//

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> x(4);

    if (n>=0 && n<= 9999) {
        if (n<=99) {
            x[3]=n%10;
            n/=10;
            x[2]=n%10;
        }else if (n<=999) {
            x[3]=n%10;
            n/=10;
            x[2]=n%10;
            n/=10;
            x[1]=n%10;
        }else if (n<=9999) {
            x[3]=n%10;
            n/=10;
            x[2]=n%10;
            n/=10;
            x[1]=n%10;
            n/=10;
            x[0]=n%10;
        }
    }
    for (int i=0;i<4;i++) {
        cout<<x[i];
    }
    return 0;
}