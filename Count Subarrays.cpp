//
// Created by hp on 10/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count = 0;
        if (n>=1 and n<=100) {
            vector<int> a(n);

            for (int i=0;i<n;i++) cin >> a[i];

            for (int i=0;i<n;i++) {
                for (int j=i;j<n;j++) {
                    bool flag = true;
                    for (int k=i+1;k<=j;k++) {
                        if (a[k-1] > a[k]) {
                            flag = false;
                            break;
                        }
                    }
                    if (flag) {
                        ++count;
                    }
                }
            }

        }
        cout << count << endl;
    }
    return 0;
}