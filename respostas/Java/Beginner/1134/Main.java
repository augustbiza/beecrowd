import java.io.IOException;
import java.util.Scanner;

class Main {

    public static void main(String []args) throws IOException {
        Scanner scan = new Scanner(System.in);

        int al = 0, ga = 0, di = 0;

        int op;
        
        do{

            op = scan.nextInt();

            switch(op) {
            case 1: al++; break;
            case 2: ga++; break;
            case 3: di++; break;
            default: 
            }

        }while(op != 4);

        System.out.println("MUITO OBRIGADO");
        System.out.println("Alcool: "+al);
        System.out.println("Gasolina: "+ga);
        System.out.println("Diesel: "+di);

        scan.close();
    }
}