import java.util.Scanner;

public class Week3_Assignment {

    // P1. Voting Eligibility Checker
    static void checkVotingEligibility(int age) {
        if (age >= 18) {
            System.out.println("Eligible to vote");
        } else {
            System.out.println("Not eligible to vote");
        }
    }

    // P2. Positive, Negative, or Zero Classifier
    static void classifyNumber(int number) {
        if (number > 0) {
            System.out.println("Positive");
        } else if (number < 0) {
            System.out.println("Negative");
        } else {
            System.out.println("Zero");
        }
    }

    // P3. Print Numbers 1 to N
    static void printNumbersUpToN(int n) {
        for (int i = 1; i <= n; i++) {
            System.out.println(i);
        }
    }

    // P4. Sum of Natural Numbers Using a While Loop
    static void sumOfNaturalNumbers(int n) {
        int sum = 0;
        int i = 1;

        while (i <= n) {
            sum = sum + i;
            i++;
        }

        System.out.println("Sum of numbers from 1 to " + n + " = " + sum);
    }

    // P5. Day Name From Number
    static void printDayName(int dayNumber) {
        switch (dayNumber) {
            case 1:
                System.out.println("Monday");
                break;
            case 2:
                System.out.println("Tuesday");
                break;
            case 3:
                System.out.println("Wednesday");
                break;
            case 4:
                System.out.println("Thursday");
                break;
            case 5:
                System.out.println("Friday");
                break;
            case 6:
                System.out.println("Saturday");
                break;
            case 7:
                System.out.println("Sunday");
                break;
            default:
                System.out.println("Invalid day number");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("===== WEEK 3 ASSIGNMENT =====");

        System.out.print("\nEnter age for P1: ");
        int age = sc.nextInt();
        checkVotingEligibility(age);

        System.out.print("\nEnter number for P2: ");
        int number = sc.nextInt();
        classifyNumber(number);

        System.out.print("\nEnter N for P3: ");
        int n = sc.nextInt();
        printNumbersUpToN(n);

        System.out.print("\nEnter N for P4: ");
        int sumN = sc.nextInt();
        sumOfNaturalNumbers(sumN);

        System.out.print("\nEnter day number (1-7) for P5: ");
        int dayNumber = sc.nextInt();
        printDayName(dayNumber);

        sc.close();
    }
}
