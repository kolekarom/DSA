import java.util.Arrays;
import java.util.Scanner;

public class ship {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
       int[] numbers = {1, 2, 10, 5};
        
       Arrays.sort(numbers);
      int j = Arrays.Min(numbers);
        System.out.println(j);
         sc.close();

       


        
    }

}
