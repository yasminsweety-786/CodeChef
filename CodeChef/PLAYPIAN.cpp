#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        string s; cin >> s;
        bool valid = true;
        for (int i = 0; i < s.size(); i += 2) {
            if (s[i] == s[i+1]) {
                valid = false;
                break;
            }
        }
        cout << (valid ? "yes" : "no") << "\n";
    }
    return 0;
}
