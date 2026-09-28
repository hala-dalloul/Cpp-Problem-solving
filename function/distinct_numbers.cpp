//
// Created by hp on 28/9/2026.
//

#include <bits/stdc++.h>
using namespace std;

int distinctNumbers(int n) {
    unordered_set<int> numbers(n);
    int unique_count = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        numbers.insert(x);
    }
    return numbers.size();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cout << distinctNumbers(n);


    return 0;
}
