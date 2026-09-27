//
// Created by hp on 30/8/2026.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int a, b;
    cin >> a >> b;

    vector<int> a_array(a);
    for (int i= 0;i<a;i++) cin >> a_array[i];
    while (b--) {
        int target ,f = a+1;
        cin >> target;
        int l = 0, r = a - 1;

        while (l <= r) {
            int mid = (l + r )/ 2;
            if (a_array[mid] >= target) {
                f = mid+1;
                r = mid - 1;
            }
            else {
                 l = mid+1;
            }
        }
        cout << f<<endl;
    }

    return 0;
}