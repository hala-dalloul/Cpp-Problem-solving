    //
    // Created by hp on 14/9/2026.
    //
    #include <bits/stdc++.h>
    using namespace std;
    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int n;
        cin >> n;
        while (n--) {
            string s,t;
            cin >> s >> t;
            int x = 0;
            int max_length = max(s.length(),t.length());
            for (int i = 0; i < max_length; i++) {
                if (i < s.length()) {
                    cout << s[i];
                }
                if (i < t.length()) {
                    cout << t[i];
                }
            }
            cout<<"\n";

        }
        return 0;
    }
