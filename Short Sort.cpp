#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    if (t >= 1 && t <= 6) {
        while (t--) {
            string seq;
            cin >> seq;
            if (seq.length() == 3 && (seq.find('a') == 0 || seq.find('b') == 1 || seq.find('c') == 2 )) {
                cout << "YES" << endl;
            }else {
                cout << "NO" << endl;
            }

        }
    }

}