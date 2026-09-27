//
// Created by hp on 14/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int numbers;
    cin >> numbers;
    vector<string> word(numbers);
    for (int i = 0; i < numbers; ++i) {
        cin >> word[i];
        if (word[i].size() <=10) {
            cout << word[i] << "\n";
        }else {
            cout<<word[i].front()<<(word[i].size()-2)<<word[i].back()<<"\n";
        }
    }
    return 0;
}
