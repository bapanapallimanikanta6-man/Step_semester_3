#include <iostream>
using namespace std;

int main() {
    // a. Get an integer input and assign it to the number variable.
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // b. Create a boolean variable isPrime and initialize it to true.
    bool isPrime = true;

    // Numbers less than 2 are not prime numbers
    if (number < 2) {
        isPrime = false;
    } else {
        // c. Run a for loop from i = 2 to i < number.
        for (int i = 2; i < number; i++) {
            // Check if the number is divisible by i.
            if (number % i == 0) {
                // d. If true, set isPrime to false and break the loop immediately.
                isPrime = false;
                break;
            }
        }
    }

    // e. Outside the loop, print whether the number is Prime based on the isPrime variable.
    if (isPrime) {
        cout << number << " is a Prime number." << endl;
    } else {
        cout << number << " is not a Prime number." << endl;
    }

    return 0;
}
Use code with caution.
