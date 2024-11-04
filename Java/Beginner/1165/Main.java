import java.io.IOException;
import java.util.Scanner;

class Main {

    public static void main(String []args) throws IOException {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();

        while(n > 0) {

            int num = scan.nextInt(), c = 0;

            for(int i = 2; i <= num/2; i++) {
                
                if(num % i == 0) c++;
            }

            if(c > 0) System.out.println(num+" nao eh primo");
            else System.out.println(num+" eh primo");

            n--;
        }

        scan.close();
    }
}