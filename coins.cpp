#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string one, two, three;
    if (!(cin >> one >> two >> three)) return 0;

    pair<int, char> a = {0, 'A'};
    pair<int, char> b = {0, 'B'};
    pair<int, char> c = {0, 'C'};

    string inputs[] = {one, two, three};

    for (int i = 0; i < 3; i++) {
        string s = inputs[i];
        if (s[1] == '>') {
            if (s[0] == 'A') a.first++;
            else if (s[0] == 'B') b.first++;
            else if (s[0] == 'C') c.first++;
        } else if (s[1] == '<') {
            if (s[2] == 'A') a.first++;
            else if (s[2] == 'B') b.first++;
            else if (s[2] == 'C') c.first++;
        }
    }

    vector<pair<int, char>> x = {a, b, c};

    sort(x.begin(), x.end());

    for (int i = 0; i < x.size(); i++) {
        cout << x[i].second;
    }

    return 0;
}