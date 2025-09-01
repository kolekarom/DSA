import java.util.Scanner;

public class PalindromeCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Take input
        System.out.print("Enter a number: ");
        int x = sc.nextInt();

        // Check palindrome
        if (isPalindrome(x)) {
            System.out.println(x + " is a Palindrome.");
        } else {
            System.out.println(x + " is NOT a Palindrome.");
        }

        sc.close();
    }

    // Method to check palindrome
    public static boolean isPalindrome(int x) {
        if (x < 0) {
            return false; // negative numbers are not palindrome
        }

        int reverse = 0;
        int temp = x;

        while (temp > 0) {
            reverse = (reverse * 10) + (temp % 10); // take last digit
            temp /= 10; // remove last digit
        }

        return reverse == x;
    }
}
