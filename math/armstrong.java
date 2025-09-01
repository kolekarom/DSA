import java.util.*;

public class armstrong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the number : ");
        int num = sc.nextInt();
        
        int originalNum = num;
        int sum = 0;
        int digits = String.valueOf(num).length();

        while( num > 0){
            int digit = num % 10;
            sum += Math.pow(digit, digits);
            num /= 10;
        }
        if (sum == originalNum){
            System.out.println(originalNum + " is an Armstrong number.");
        } else {
            System.out.println(originalNum + " is not an Armstrong number.");
        }
    }
}

