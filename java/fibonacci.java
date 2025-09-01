import java.util.Scanner;
public class fibonacci {
        public static void printFib(double a ,double b  ,double n){
        if(n==0){
            return;
        }
        double c = a+b;
        System.out.println(c);
        printFib(b,c,n-1);

    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
         double  a =0,b=1;
        System.out.println(a);
        System.out.println(b);
        double n = 50;
        printFib(a,b,n-2);

    }
}
