//
// Created by hp on 28/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
void max_and_min(int number,priority_queue<int , vector<int >, greater<int> > pq) {
    for (int i = 0; i < number; i++) {
        int n;
        cin >> n;
        pq.push(n);
    }
    cout << pq.top() << " ";
    for (int i = 0; i < number-1; i++) {
        pq.pop();
    }
    cout << pq.top();

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int number;
    cin >> number;
    priority_queue<int , vector<int >, greater<int> > pq;
    max_and_min(number,pq);

    return 0;
}