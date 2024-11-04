import java.util.Scanner;
import java.io.IOException;

class Main {

    public static void main(String []args) throws IOException {
        Scanner scan = new Scanner(System.in);

        int n = 10;
        int []x = new int[n];

        for(int i = 0; i < n; i++) {
            int aux = scan.nextInt();

            if(aux < 1) x[i] = 1;
            else x[i] = aux;
        }

        for(int i = 0; i < n; i++) {
            System.out.println("X["+i+"] = "+x[i]);
        }

        scan.close();
    }
}