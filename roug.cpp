#include <iostream>

using namespace std;

void printNumbers(int n) {
    if (n > 50) {
        return;
    }
    cout << n << " ";
    printNumbers(n + 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Numbers from " << n << " to 50: ";
    printNumbers(n);
    cout << endl;
    return 0;
}

