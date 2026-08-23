#include <iostream>
#include <vector>
// #include <vector>
using namespace std;
# define ll long long
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    if (t >= 1 && t <= 55) {
        while (t--){
            int a , b;
            cin >> a >> b ;
            if (a <= 10 && b <= 10 && a <= b) {
                cout << b-a << endl;
            }else {
                cout << a << endl;
            }
        }
    }else {
        cout << -1 << endl;
    }
    return 0;
}

