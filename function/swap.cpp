//
// Created by hp on 28/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

void swap_this_numbers(int x, int y) {
    swap(x,y);
    cout << x << " " << y;
}


int main() {
    int x, y;
    cin >> x >> y;
    swap_this_numbers(x, y);
}