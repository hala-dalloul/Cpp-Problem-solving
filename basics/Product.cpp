//
// Created by hp on 28/8/2026.
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll a,b;
    cin>>a>>b;

    if (a<=0 && b>=0) {
        cout<<"Zero"<<endl;
    }else if (a>0) {
        cout<<"Positive"<<endl;
    }else {
        ll count = b-a+1;
        if (count%2 == 0) {
            cout<<"Positive"<<endl;
        }else {
            cout<<"Negative"<<endl;
        }
    }
    return 0;
}

/*
* You are given two integers A
 and B
. Your task is to determine if the product of the integers A,A+1,A+2,...,B
 is positive, negative or zero.

Input
The input contains two integers A
 and B
 (−109≤A≤B≤109)
.

Output
If the product is positive, print Positive. If it is negative, print Negative. If it is zero, print Zero.

Examples
InputCopy
1 3
OutputCopy
Positive
InputCopy
-3 -1
OutputCopy
Negative
InputCopy
-1 1
OutputCopy
Zero
Note
In the first example:

1×2×3=6
, is positive.

In the second example:

(−3)×(−2)×(−1)=−6
, is negative.

In the third example:

(−1)×0×1=0
, is zero.
 */