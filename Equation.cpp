//
// Created by hp on 28/8/2026.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int a,b,c;
    char s,q;
    int x = 0;

    cin>>a>>s>>b>>q>>c;

    if (q=='=') {
        if (s == '+') {
            x = a+b;
        } else if (s == '-') {
            x = a-b;
        } else if (s == '*') {
            x = a*b;
        }
    }
    if (x == c) {
        cout<<"Yes"<<endl;
    }else {
        cout<<x<<endl;
    }
    return 0;
}