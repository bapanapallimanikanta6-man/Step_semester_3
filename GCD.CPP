#include <iostream>

int main() {
    int num1, num2;

    // Prompt user for input
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Store original values for final output display
    int a = num1;
    int b = num2;

    // Loop continues until the second number becomes 0
    while (b != 0) {
        int temp = b;
        b = a % b; // Store the remainder
        a = temp;  // Update a with the old value of b
    }

    // 'a' now holds the GCD
    std::cout << "The GCD of " << num1 << " and " << num2 << " is: " << a << std::endl;

    return 0;
}
