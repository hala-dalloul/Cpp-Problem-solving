#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    if (t >= 1 && t <= 1000) {
        while (t--) {
            string a;
            vector<char> b;
            vector<char> dv;

            int n;
            cin >> n;
            if (n >= 1 && n <= 10) {
                for (int i = 0; i < n; i++) {
                    char c;
                    cin >> c;
                    a.push_back(c);
                }
            }
            int m;
            cin >> m;
            if (m >= 1 && m <= 10) {
                for (int i = 0; i < m; i++) {
                    char c;
                    cin >> c;
                    b.push_back(c);
                }
                // DV List

                for (int i = 0; i < m; i++) {
                    char c;
                    cin >> c;
                    c = toupper(c);
                    dv.push_back(c);
                }
            }
            // arrange
            for (int i = 0; i < dv.size(); i++) {
                if (dv[i] == 'D') {
                    a = a + b[i];
                } else if (dv[i] == 'V') {
                    a = b[i] + a;
                }
            }
            cout << a << endl;
        }
    }
}
