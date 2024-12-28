import java.util.Scanner;
import java.io.IOException;

class Main {

    public static void main(String []args) throws IOException {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt(), i = 1;

        while(i <= n) {

            double square = Math.pow(i, 2), cubic = Math.pow(i, 3);
            System.out.printf("%d %.0f %.0f\n", i, square, cubic);

            i++;
        }

        scan.close();
    }
}