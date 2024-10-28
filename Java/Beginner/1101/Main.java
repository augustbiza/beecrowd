import java.io.IOException;
import java.util.Scanner;

class Main {

    public static void main(String []args) throws IOException {
        Scanner scan = new Scanner(System.in);

        int m = scan.nextInt(), n = scan.nextInt(), higher, lower, sum = 0;

        while(m > 0 && n > 0) {

            if(m > 0 && n > 0) {

            if(m > n) { 
                higher = m;
                lower = n;
            }
            else {
                higher = n;
                lower = m;
            }

            for(int i = lower; i <= higher; i++) {
                sum += i;
                System.out.printf("%d ", i);
            }

            System.out.printf("Sum=%d\n", sum);
            }

            m = scan.nextInt(); n = scan.nextInt(); sum = 0;

        }

        scan.close();
    }
}