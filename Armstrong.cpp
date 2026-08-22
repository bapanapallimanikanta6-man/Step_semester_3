#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    // Step 1: Find the total number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;

    // Step 2: Calculate the sum of digits raised to the power of n
    while (temp != 0) {
        remainder = temp % 10;
        result += round(pow(remainder, n)); // round handles floating-point inaccuracies
        temp /= 10;
    }

    // Step 3: Check if the sum equals the original number
    if (result == originalNum)
        cout << originalNum << " is an Armstrong number." << endl;
    else
        cout << originalNum << " is not an Armstrong number." << endl;

    return 0;
}
