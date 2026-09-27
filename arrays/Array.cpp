//
// Created by hp on 24/9/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> negative;
    vector<int> positive;
    vector<int> zero;
    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        if (v > 0) {
            positive.push_back(v);
        } else if (v < 0) {
            negative.push_back(v);
        } else {
            zero.push_back(v);
        }
    }
    if (positive.empty() && negative.size() >= 2) {
        positive.push_back(negative.back());
        negative.pop_back();

        positive.push_back(negative.back());
        negative.pop_back();
    }
    if (negative.size() % 2 == 0 ) {
        zero.push_back(negative.back());
        negative.pop_back();
    }

    cout << negative.size() << " ";
    for (int i = 0; i < negative.size(); i++) {
        cout << negative[i] << " ";
    }
    cout << "\n";
    cout << positive.size() << " ";
    for (int i = 0; i < positive.size(); i++) {
        cout << positive[i] << " ";
    }
    cout << "\n";
    cout << zero.size() << " ";
    for (int i = 0; i < zero.size(); i++) {
        cout << zero[i] << " ";
    }
}
