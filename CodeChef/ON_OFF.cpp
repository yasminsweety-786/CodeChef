#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        string S, R; cin >> S >> R;
        int diff = 0;
        for (int i = 0; i < N; i++) {
            if (S[i] != R[i]) diff++;
        }
        cout << (diff % 2 == 0 ? 1 : 0) << "\n";
    }
    return 0;
}

