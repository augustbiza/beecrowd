import java.io.IOException;
import java.util.Scanner;

class Main {

    public static void main(String []args) {
        Scanner scan = new Scanner(System.in);

        int x = scan.nextInt(), y = scan.nextInt(), menor, maior;

        if(x > y) {
            maior = x;
            menor = y;
        }
        else {
            maior = y;
            menor = x;
        }

        for(int i = menor+1; i < maior; i++) {
            if((i % 5 == 2) || (i % 5 == 3)) System.out.println(i);
        }

        scan.close();
    }
}