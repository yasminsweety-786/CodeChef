#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int startCount = 0, ltimeCount = 0;
        for (int i = 0; i < N; i++) {
            string code;
            cin >> code;
            if (code == "START38") startCount++;
            else if (code == "LTIME108") ltimeCount++;
        }
        cout << startCount << " " << ltimeCount << "\n";
    }
    return 0;
}
