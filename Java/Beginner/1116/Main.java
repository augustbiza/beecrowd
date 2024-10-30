import java.io.IOException;
import java.util.Scanner;

class Main {

    public static void main(String []args) throws IOException {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();

        for(int i = 0; i < n; i++) {

            int x = scan.nextInt(), y = scan.nextInt();

            if(y == 0) System.out.println("divisao impossivel");
            else {
                double result = (double)x / y;
                System.out.println(result);
            }

        }

        scan.close();
    }
}