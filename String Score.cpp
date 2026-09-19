//
// Created by hp on 17/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin>>setw(n)>>s;
    int score = 0;
    // WZYVXW
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'V') {
            score+= 5;
            i++;
        }
        else if (s[i] == 'Y' and i < s.length()-1) {
            if (i+1 < s.length()-1) {
                char p = s[i+1];
                s.erase(i+1,1);
                s.push_back(p);
            }
            i++;
        }
        else if (s[i] == 'X' and i < s.length()-1) {
            s.erase(i+1,1);
            i++;
            continue;
        }
        else if (s[i] == 'W') {
            score+=2;
            i++;
        }
        else if (s[i] == 'Z' and i < s.length()-1) {
            if (s[i+1] == 'W') {
                score/=2;
                s.erase(i,1);
            }else if (s[i+1] == 'V') {
                score/=5;
                s.erase(i,1);
            }else {
                i++;
            }
        }
        else {
            i++;
        }
    }
    cout << score;

    return 0;
}