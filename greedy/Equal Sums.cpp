#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n + 1, 0);
    vector<int> pref1(n + 1, 0);
    vector<int> prefA(n + 1, 0);
    vector<int> pref2(n + 1, 0);
    vector<int> prefB(n + 1, 0);
    int z = 0;
    while (n--) {
        int x;
        cin >>x;
        for (int i = 1; i <= x; i++) {
            if (z){
                cin >> pref1[i];
                prefA[i] += pref1[i];
            }else {
                cin >> pref2[i];
            }
        }
        z=1;
    }


     sort(a.begin() + 1, a.end());
    for (int i = 1; i <= n; i++) {
        pref2[i] = pref2[i - 1] + a[i];
    }
    //
    // int m;
    // cin >> m;
    // while (m--) {
    //     int type, l, r;
    //     cin >> type >> l >> r;
    //
    //     if (type == 1) {
    //         cout << pref1[r] - pref1[l - 1] << endl;
    //     } else {
    //         cout << pref2[r] - pref2[l - 1] << endl;
    //     }
    // }

    return 0;
}
