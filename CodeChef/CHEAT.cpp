#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        if (N < 2) {
            cout << 0 << endl;
        } else {
            cout << ((N - 2) / 7 + 1) << endl;
        }
    }
    return 0;
}
