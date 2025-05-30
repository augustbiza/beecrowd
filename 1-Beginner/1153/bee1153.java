// 1153 - Simple Factorial
import java.io.IOException;
import java.util.Scanner;

class bee1153 {

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);

        long n = scan.nextLong();

        for(long i = n-1; i > 1; i--) n *= i;

        System.out.println(n);

        scan.close();
    }
}