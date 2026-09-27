#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<ll> v(n+1);
    vector<ll> g(n+1);
    // sorted
    vector<ll> x(n+1);
    vector<ll> z(n+1);
    for (int i = 1; i <= n; i++) {
        cin>>v[i];
        g[i] = g[i-1]+v[i];
    }
    x = v;
    sort(x.begin(), x.end());
    for (int i = 1; i <= n; i++) z[i] = z[i-1]+x[i];
    int c = 1;
    cin>>c;
    int ope=0,l=0,r=0;
    while (c--) {
        cin>>ope>>l>>r;
        if (ope == 1) {
            cout << g[r]-g[l-1]<< endl;
        }else if (ope == 2){
            cout << z[r]-z[l-1] << endl;
        }
    }
    return 0;
}