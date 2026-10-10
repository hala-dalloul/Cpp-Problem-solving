//
// Created by hp on 1/10/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    /*
3
12
APPAPPPAPPPP
3
AAP
3
PPA
    */
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        string seq;
        cin >> seq;
        int start = seq.find('A');
        if (start == string::npos || start == x-1) {
            cout << "0\n";
           continue;
        }

        int current =0;
        int count = 0;
        for (int i = start; i < x; ++i) {
            if (seq[i] == 'P') {
                ++current;
            }
            else {
                count = max(count,current);
                current = 0;
            }
        }
        count = max(count,current);
        cout << count << "\n";
    }
    return 0;
}
