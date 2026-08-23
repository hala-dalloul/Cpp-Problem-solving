#include <bits/stdc++.h>
using namespace std;

int main() {

    string t;
    cin >> t;

    for (int i = 0; i < t.size(); i++) {
        t[i] = tolower(t[i]);
        if (t[i] == 'a' || t[i] == 'e' ||t[i] == 'u' ||t[i] == 'o' ||t[i] == 'y' ||t[i] == 'i') {
            continue;
        }
        cout << '.' << t[i];
    } 

}