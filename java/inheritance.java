class Animal{
    void Sounds(){
        System.out.println("Animal makes a sound");
    }
}
class Dog extends Animal{
    void Sounds(){
        System.out.println("Dog barks");
    }
}


public class inheritance {
    public static void main (String[] args){

        System.out.println("Hello, World!");
        Dog d1 = new Dog();
        Animal a1 = new Animal();
        
        
        d1.Sounds();
        a1.Sounds();
        
    }
}
