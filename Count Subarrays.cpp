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

        if (n>=1 and n<=100) {
            vector<int> a(n);
            int count = n;
            bool flag = false;
            for (int i=0;i<n;i++) {
                cin >> a[i];
            }

            for (int i=0;i<n-1;i++) {
                if (a[i] < a[i+1] ) {
                    for (int j=i+1;j<n;j++) {
                        if (a[j] < a[i+1]) {
                            flag = true;
                            count++;
                        }else {
                            flag = false;
                        }
                    }
                    count ++;
                }else {
                    continue;
                }
            }
        cout << count << endl;
        }
    }
    return 0;
}