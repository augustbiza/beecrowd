import java.io.IOException;
import java.util.Scanner;

class Main {

    public static void main(String []args) throws IOException {
        Scanner scan = new Scanner(System.in);

        int x, y;

        do {

            x = scan.nextInt();
            y = scan.nextInt();

            if(x != y) {

                int higher, lower;
                
                if(x < y) {
                    System.out.println("Crescente");
                }
                else {
                    System.out.println("Decrescente");
                }
            }
        
        }while(x != y);

        scan.close();
    }
}