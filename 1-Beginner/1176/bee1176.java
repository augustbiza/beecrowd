// 1176 - Fibonacci Array
import java.io.IOException;
import java.util.Scanner;

class bee1176 {

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);

        long n1 = 0, n2 = 1, n3;

        long[] fibonacci = new long[61];
        fibonacci[0] = n1; fibonacci[1] = n2;
        for(int i = 2; i < 61; i++) {

            n3 = n1+n2;
            fibonacci[i] = n3;
            
            n1 = n2; n2 = n3;
        }

        int casos = scan.nextInt();
        for(int i = 0; i < casos; i++) {

            int p = scan.nextInt();

            System.out.println("Fib(" + p + ") = " + fibonacci[p]);
        }

        scan.close();
    }
}