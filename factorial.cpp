#include <iostream> 
using namespace std;

int main() {
    int number = 5; // Input number
    int result = 1; // Variable to hold the factorial result

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else if (number == 0 || number == 1) {
        cout << "Factorial of " << number << " is 1" << endl;
    } else {
        for (int i = 1; i <= number; i++) {
            result = result * i; // Calculate factorial
        }
        cout << "Factorial of " << number << " is " << result << endl; // Output result
    }

    return 0;
}