//
// Created by hp on 9/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int num_dic,operation,num_words;
    cin>>num_dic >> operation >> num_words;

    vector<string> words(num_dic);
    vector<int>operations(num_dic);

    for(int i=0;i<num_dic;i++) {
        cin >> words[i];
    }
    for(int i=0;i<num_dic;i++) {
        cin >> operations[i];
    }
    map<string,int> val;
    for(int i=0;i<num_dic;i++) {
        string word = words[i];
        int value = operations[i];
        val[word] = value;
    }

    while (operation--) {
        int size;
        cin >> size;
        vector<int> group(size);
        int mn = 1e9;
        for (auto& i : group) {
            cin >> i;
            mn = min(mn, operations[i - 1]);
        }
        for (auto& i : group) {
            val[words[i - 1]] = mn;
        }
    }
    ll res = 0;
    while (num_words--) {
        string s;
        cin >> s;
        res += val[s];
    }
    cout << res;
    return 0;
}
