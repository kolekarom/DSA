class Student{
    String name;
    int age;

    Student(String a, int b){
       name = a;
         age = b;
    }
    void Display(){
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

public class basic{

    public static void main (String[] args){

        System.out.println("Hello, World!");


        Student s1 = new Student("om", 21);
        s1.Display();
    }
}