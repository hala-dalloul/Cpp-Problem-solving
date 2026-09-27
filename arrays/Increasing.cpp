#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    if (t >= 1 && t<=100) {
        while (t--) {
            int n;
            cin >> n;
            if (n == 0){continue;}
            vector<int> a;
            for (int i = 0; i < n; i++) {
                int x ;
                cin >> x;
                a.push_back(x);
            }
            sort(a.begin(),a.end());
            bool flag = true;
            for (int i = 0; i < n-1; i++) {
                if (a[i] == a[i+1]) {flag = false;break;}
            }
            if ((a[0] < a[n-1] )|| a.size() == 1 && flag) {
                cout << "Yes"<< endl;
            }else {
                cout << "No"<< endl;
            }
        }
    }
}
