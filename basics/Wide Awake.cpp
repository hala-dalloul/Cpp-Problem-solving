//
// Created by hp on 29/8/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, m;
    cin >> h >> m;
    int time = 0;
    if (h >= 0 && h <= 23 && m >= 0 && m <= 59) {

        time = (h * 60) + m;
        time -= 45;

        if (time < 0) {
            time += 24 * 60;
        }

        h = time / 60;
        time %= 60;
        m = time;
    }
    cout << h << " " << m << endl;
}
