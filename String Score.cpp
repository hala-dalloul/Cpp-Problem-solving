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
    for (int i=0; i<n; i++) {
        if (s[i] == 'V') {
            score+= 5;
        }
        if (s[i] == 'W') {
            swap(s[i],s[s.length()-1]);
        }
        if (s[i] == 'X') {

        }
        if (s[i] == 'Z') {}
    }
    return 0;
}
// String S = "VYWZW" and score initially = 0 .
// First char is 'V' so add 5 to score and become 5.
// Second char is 'Y' then move 'W' to end of string and it become "VYZWW" and score = 5.
// Third char is 'Z' then divide total score by 2 because next char is 'W' and remove it so string become "VYZW" and score = 2.
// Fourth char is 'W' so add 2 to score and become 4.
// So final answer is 4.
