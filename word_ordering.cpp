#include <bits/stdc++.h>
using namespace std;

int letter_rank[128];

bool customCompare(const string& a, const string& b) {
    int len = min(a.length(), b.length());

    for (int i = 0; i < len; i++) {
        if (a[i] != b[i]) {
            char low_a = tolower(a[i]);
            char low_b = tolower(b[i]);

            if (low_a != low_b) {
                return letter_rank[low_a] < letter_rank[low_b];
            }

            // إذا كانا نفس الحرف ولكن بحالات مختلفة، الصغير (lower) يأتي أولاً
            // في الأسكي (ASCII)، الحرف الكبير 'A' (65) أصغر من 'a' (97)،
            // وبما أننا نريد الصغير أولاً، نكسر القاعدة العادية ونعكس الشرط.
            return islower(a[i]) && isupper(b[i]);
        }
    }
    // إذا كانت كلمة بادئة للأخرى، الكلمة الأقصر تأتي أولاً
    return a.length() < b.length();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string alphabet_permutation;
    if (!(cin >> alphabet_permutation)) return 0;

    for (int i = 0; i < 26; i++) {
        letter_rank[alphabet_permutation[i]] = i;
    }

    int n;
    cin >> n;

    vector<string> words(n);
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    sort(words.begin(), words.end(), customCompare);

    for (int i = 0; i < n; i++) {
        cout << words[i] << "\n";
    }

    return 0;
}