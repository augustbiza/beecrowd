import java.util.Scanner;
import java.io.IOException;

class Main {

    public static void main(String []args) throws IOException {
        Scanner scan = new Scanner(System.in);

        int num = scan.nextInt();

        System.out.println("1");

        for(int i = 2; i <= num/2; i++) {
            if(num % i == 0) System.out.println(i);
        }

        System.out.println(num);

        scan.close();
    }
}