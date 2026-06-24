#include <bits/stdc++.h>
using namespace std;

void factorial(int n) {
    vector<int> res(1, 1); // store digits in reverse order

    for (int x = 2; x <= n; x++) {
        int carry = 0;
        for (int i = 0; i < res.size(); i++) {
            int prod = res[i] * x + carry;
            res[i] = prod % 10;
            carry = prod / 10;
        }
        while (carry) {
            res.push_back(carry % 10);
            carry /= 10;
        }
    }

    for (int i = res.size() - 1; i >= 0; i--)
        cout << res[i];
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        factorial(n);
    }
    return 0;
}
