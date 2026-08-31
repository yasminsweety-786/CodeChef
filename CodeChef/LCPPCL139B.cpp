#include <iostream>
using namespace std;

// Inline function to compute (a+b)^2
inline int squareOfSum(int a, int b) {
    return (a + b) * (a + b);
}

int main() {
    int a, b;
    cin >> a >> b;   // user input

    cout << squareOfSum(a, b) << endl;  // call inline function
    return 0;
}
