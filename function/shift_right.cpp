//
// Created by hp on 28/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

void shift_right(int n, int x) {
    deque<int> arr;
    for (int i=0; i<n; i++) {
        int m;
        cin>>m;
        arr.push_back(m);
    }

    for (int i=0; i<x; i++) {
        int a = arr.back();
        arr.pop_back();
        arr.push_front(a);
    }
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,x;
    cin >> n>>x;
    shift_right(n,x);

    return 0;
}