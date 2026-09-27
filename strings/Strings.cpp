//
// Created by hp on 14/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string input1,input2;
    cin >> input1;
    cin >> input2;

    cout<< input1.size()<<" "<<input2.size()<<"\n";
    cout<<input1+input2<<"\n";
    char firstChar = input1.front();
    char secondChar = input2.front();
    input1.front() = secondChar;
    input2.front() = firstChar;
    cout<<input1<<" "<<input2<<"\n";


    return 0;
}