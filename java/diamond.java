public class diamond {
    public static void main(String[] args) {

            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    //if((i+j)%2 == 0){
                    if(i-1==j || i+1==j){
                        System.out.print(" *");
                    }
                    else{
                        System.out.print("  ");
                    }

                }
                System.out.println("\n");

            }
        System.out.println();





    }
}
