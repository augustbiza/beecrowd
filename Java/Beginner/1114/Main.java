import java.io.IOException;
import java.util.Scanner;

class Main {

    public static void main(String []args) {
        Scanner scan = new Scanner(System.in);

        int password;

        do{

            password = scan.nextInt();

            if(password != 2002) System.out.println("Senha Invalida");
            else System.out.println("Acesso Permitido");

        }while(password != 2002);



        scan.close();
    }
}