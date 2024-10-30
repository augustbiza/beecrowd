import java.io.IOException;
import java.util.Scanner;

class Main {

    public static void main(String []args) {
        Scanner scan = new Scanner(System.in);

        double a, b;

        do {

            a = scan.nextDouble();

            if(a < 0 || a > 10) System.out.println("nota invalida");

        }while(a < 0 || a > 10);


        do {
        
            b = scan.nextDouble();

            if(b < 0 || b > 10) System.out.println("nota invalida");
        
        }while(b < 0 || b > 10);

        double average = (a+b)/2;
        System.out.printf("media = %.2f\n", average);

        scan.close();
    }
}