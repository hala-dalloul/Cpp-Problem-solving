//
// Created by hp on 28/8/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    char s;
    bool isValid = false;
    cin >> a >> s >> b;
    if (s=='/' && b == 0)isValid = false;
    else if ( s =='+' || s == '-' || s == '*' || s == '/' )isValid = true;
    else isValid = false;
    cout<< (isValid?"valid":"invalid") << endl;


    return 0;
}
