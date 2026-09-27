    //
    // Created by hp on 12/9/2026.
    //
    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        ios_base::sync_with_stdio(false);
        int n, m;
        cin >> n >> m;
        int matrix[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j< m/2; j++) {
                swap(matrix[i][j],matrix[i][m-1-j]);
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout<< matrix[i][j]<<" ";
            }
            cout<<"\n";
        }
        return 0;
    }
