#include <iostream>
using namespace std;

void printValue(int *ptr) {
    if (ptr != nullptr) { // Check if the pointer is not null
        cout << "Value: " << *ptr << endl;
    } else {
        cout << "Pointer is null" << endl;
    }
}

int main() {
    int *number = nullptr; // Pointer is null initially
    printValue(number); // This should print the value pointed to by the pointer
    return 0;
}
