import java.util.Scanner;
import java.io.IOException;

class Main {

    public static void main(String []args) throws IOException{
        Scanner scan = new Scanner(System.in);

        int x = scan.nextInt(), y = scan.nextInt(), sum = 0, menor, maior;

        if(x > y) {
            maior = x;
            menor = y;
        }
        else {
            maior = y;
            menor = x;
        }

        while(menor <= maior) {

            if(menor % 13 != 0) {
                sum += menor;
            }
            
            menor++;
        }

        System.out.println(sum);

        scan.close();
    }
}