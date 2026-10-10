#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    if (n % 3 == 2) {
        cout << 1 << " " << 2 << " " << n - 3 << "\n";
    } else {
        cout << 1 << " " << 1 << " " << n - 2 << "\n";
    }

    return 0;
}
