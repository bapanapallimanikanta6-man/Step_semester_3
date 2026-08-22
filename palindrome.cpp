import java.util.Scanner;

public class PalindromeCheck {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        
        if (isPalindrome(number)) {
            System.out.println(number + " is a Palindrome.");
        } else {
            System.out.println(number + " is not a Palindrome.");
        }
        
        scanner.close();
    }

    public static boolean isPalindrome(int num) {
        // Negative numbers are not palindromes (e.g., -121 != 121-)
        if (num < 0) {
            return false;
        }

        int originalNum = num;
        int reversedNum = 0;

        // Reverse the number
        while (num > 0) {
            int remainder = num % 10;
            reversedNum = (reversedNum * 10) + remainder;
            num = num / 10;
        }

        // Check if original and reversed numbers are equal
        return originalNum == reversedNum;
    }
}
