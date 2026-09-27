//
// Created by hp on 20/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    getline(cin,s);

    string a = "username";
    string b = "pwd";
    string c = "profile";
    string d = "role";
    string e = "key";
    int startA = a.length()+s.find(a)+1;
    int startB = b.length()+s.find(b)+1;
    int startC = c.length()+s.find(c)+1;
    int startD = d.length()+s.find(d)+1;
    int startE = e.length()+s.find(e)+1;

    cout << a << ": "<< s.substr(startA,(s.find(b)-startA-1)) << "\n";
    cout << b << ": "<< s.substr(startB,(s.find(c)-startB-1)) << "\n";
    cout << c << ": "<< s.substr(startC,(s.find(d)-startC-1)) << "\n";
    cout << d << ": "<< s.substr(startD,(s.find(e)-startD-1)) << "\n";
    cout << e << ": "<< s.substr(startE) << "\n";


    return 0;
}