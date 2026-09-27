//
// Created by hp on 28/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

bool isOdd(long long z) {
    return z % 2 != 0;
}

string isPalindrome(long long z) {
    string binary = "";
    while (z > 0) {
        binary += to_string(z % 2);
        z /= 2;
    }

    string renumber = binary;
    reverse(renumber.begin(), renumber.end());

    if (binary == renumber) return "YES";

    return "NO";

}


int main() {
    long long number;
    cin >> number;
    if (isOdd(number) && isPalindrome(number) == "YES") {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}
