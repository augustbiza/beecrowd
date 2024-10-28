import java.io.IOException;
import java.util.Scanner;

class Main {

    public static void main(String []args) {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();

        while(n > 0) {

            int x = scan.nextInt(), y = scan.nextInt(), sum = 0, maior, menor;

            if(x > y) {
                maior = x;
                menor = y;
            }
            else {
                maior = y;
                menor = x;
            }

            for(int c = menor+1; c < maior; c++) {

                if(c % 2 != 0) sum += c; 

            }

            System.out.println(sum);

            n--;
        }

        scan.close();
    }
}