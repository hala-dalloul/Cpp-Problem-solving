//
// Created by hp on 16/9/2026.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    char x = s[0];
    for (int i = 0; i < s.length()-1; i++) {
        if (s[s.length()-1] == s[s.length()-2]) {
            s = s.substr(0, s.length()-1);
        }
        if (s[i] == s[i+1]) {
            s= s.substr(i, s.length()-1);
        }else {
            cout << s.length() << endl;
            break;
        }
    }
    return 0;
}


//         if (s.length() >= 2 && s[s.length() - 1] == s[s.length() - 2]) {
//             s = s.substr(0, s.length() - 2);
//             // إعادة ضبط المؤشر بعد الحذف لتجنب تجاوز الحدود
//             i = 0;
//             continue;
//         }
//         // إذا كان الحرف الحالي يساوي الحرف التالي
//         if (s[i] == s[i + 1]) {
//             // حذف الحرفين المتشابهين عبر دالة erase
//             s.erase(i, 2);
//             // إرجاع المؤشر خطوة للخلف لفحص الأحرف الجديدة المتجاورة
//             if (i > 0) i--;
//         } else {
//             // الانتقال للحرف التالي إذا لم يكن هناك تكرار
//             i++;
//         }
//
//     }