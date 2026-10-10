//
// Created by hp on 9/10/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int num_dic,operation,num_words;

    cin>>num_dic >> operation >> num_words;

    vector<string> words(num_dic);
    vector<int>operations(operation);

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

    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int n, k, m;
    cin >> n >> k >> m;
    vector<string> a(n);
    for (auto& i : a)
        cin >> i;
    vector<int> cost(n);
    map<string, int> mp;
    for (int i = 0; i < n; ++i) {
        cin >> cost[i];
        mp[a[i]] = cost[i];
    }
    while (k--) {
        int size;
        cin >> size;
        vector<int> group(size);
        int mn = 1e9;
        for (auto& i : group) {
            cin >> i;
            mn = min(mn, cost[i - 1]);
        }
        for (auto& i : group) {
            mp[a[i - 1]] = mn;
        }
    }
    ll res = 0;
    while (m--) {
        string s;
        cin >> s;
        res += mp[s];
    }
    cout << res;
}
 */