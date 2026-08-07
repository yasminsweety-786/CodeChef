#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while(T--) {
        int N; cin >> N;
        vector<int> A(N);
        int c1 = 0, cneg = 0;
        for(int i=0; i<N; i++) {
            cin >> A[i];
            if(A[i] == 1) c1++;
            else cneg++;
        }
        if(N % 2 == 1) {
            cout << -1 << "\n";
        } else {
            int sum = c1 - cneg;
            cout << abs(sum)/2 << "\n";
        }
    }
    return 0;
}
