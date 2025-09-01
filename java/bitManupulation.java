public class bitManupulation {
    public static void main(String[] args) {
        int n = 5;
        int pos = 1;
        int bitMast = 1 << pos;
        if ((bitMast & n) == 0){
            System.out.println("bit was zero");
        }
        else{
            System.out.println("bit was one");
        }
    }}

