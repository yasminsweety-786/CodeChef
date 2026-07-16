#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, n;
        cin >> x >> n;

        int required = (n + 99) / 100;   // ceil(N/100)
        int new_planes = required - x;
        if (new_planes < 0) new_planes = 0;

        cout << new_planes << endl;
    }
    return 0;
}
