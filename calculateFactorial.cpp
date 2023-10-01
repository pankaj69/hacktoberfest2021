#include <iostream>

using namespace std;

int calculateFactorial(int input) {
    int factorial = 1;
    for (int i = 1; i <= input; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int input;
    cout << "Enter the number you want to calculate the factorial of: ";
    cin >> input;

    if (input < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int factorial = calculateFactorial(input);
        cout << "The factorial of " << input << " is " << factorial << endl;
    }

    return 0;
}
