import java.util.Scanner;
import java.io.IOException;

class Main {

    public static void main(String []args) throws IOException {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt(), x = 1;

        while(n > 0) {

            for(int i = 0; i < 3; i++) {

                System.out.print(x+" ");
                x++;
            }
            System.out.println("PUM");

            x ++;
            n--;
        }

        scan.close();
    }
}