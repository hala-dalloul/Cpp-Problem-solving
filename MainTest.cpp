//
// Created by hp on 5/9/2026.
//

//L

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     set<int> numbers;
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         numbers.insert(x);
//     }
//     cout << n-numbers.size() << endl;
//     return 0;
// }

// M
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, p;
//     cin >> n >> p;
//     int maxN = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         int z;
//         cin >> z;
//         if (z<= p)
//             maxN = max(maxN, z);
//     }
//     cout << maxN << endl;
//     return 0;
// }
// I
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int x;
//     cin >> x;
//     int y =1;
//     int a = -1;
//     for (int i = 1; i <= x; i++) {
//         if (y > x / i) {
//             break;
//         }
//
//         y *= i;
//
//         if (y == 2) {
//             a = y;
//         }
//     }
//     cout << a << endl;
//     return 0;
// }

// B

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
//
// int main() {
//     std::ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//
//     int n;
//     cin>>n;
//     if (n < 2) {
//         cout << 0 << "\n";
//         return 0;
//     }
//     vector<bool> prime(n+1,true);
//     prime[0] = prime[1] = false;
//     int count=0;
//     for (int i = 2; i <= n; i++) {
//         if (prime[i]) {
//             count++;
//             for (ll j = (ll)i*i; j <= n; j += i) {
//                 prime[j] = false;
//             }
//         }
//     }
//     cout<<count<<endl;
//     return 0;
// }

// E
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     int zero = -1;
//     int one = -1;
//     for (int i = 1; i <= n; i++) {
//         int door;
//         cin >> door;
//         if (door == 0) {
//             zero = i;
//         } else {
//             one = i;
//         }
//     }
//     cout << min(zero, one) << endl;
//     return 0;
// }

// H
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) cin >> a[i];
//         sort(a.begin(), a.end());
//         int mex = 0;
//         for (int i = 0; i < n; i++) {
//             if (a[i] == mex) {
//                 mex++;
//             }
//         }
//         cout << mex << endl;
//     }
//     return 0;
// }

// G
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int D, M;
    cin >> D >> M;
    if (D <= 12 && D != M) {
        cout << "DATA INCERTA"<<endl;
    } else {
        cout << "DATA SEGURA"<<endl;
    }
    return 0;
}