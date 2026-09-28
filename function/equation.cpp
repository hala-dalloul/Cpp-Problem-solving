//
// Created by hp on 28/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

long long Equation(int n,int number) {
    long long result = 0;
    for (int i = 2; i <= number; i+=2) {
        long long power = i;
        long long re = 1;
        while (power--) {
            re *= n;
        }
        result += re;
    }
        return result;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, number;
    cin >> n >> number;
    cout << Equation(n,number);


    return 0;
}
