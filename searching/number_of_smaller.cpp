#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    vector<int> a_array(a), b_array(b);
    for (int i=0;i<a;i++) cin>>a_array[i];
    for (int i=0;i<b;i++) cin>>b_array[i];

    int i=0,j=0;
    while (i<a and j<b) {
        if (a_array[i] < b_array[j]) {
            i++;
        }else {
            cout<<i<<" ";
            j++;
        }

    }
    while (j<b) {
            cout << i << " ";
            j++;
        }
    return 0;
}