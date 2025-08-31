import java.util.*;
public class basic{

    void Om(){
        System.out.println("Om");
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name = sc.nextLine();
        System.out.println("Hello, " + name + "!");
        sc.close();
        basic obj = new basic();
        obj.Om();

    }
}