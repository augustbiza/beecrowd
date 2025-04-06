// 1160 - 
import java.io.IOException;
import java.util.Scanner;

class bee1160 {

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();

        while(n > 0) {

            int pa, pb, ano = 0;
            double ga, gb;
            boolean maisDeCem = false;

            pa = scan.nextInt();
            pb = scan.nextInt();

            ga = scan.nextDouble();
                ga /= 100;
                ga += 1;
            gb = scan.nextDouble();
                gb /= 100;
                gb += 1;

            while(pa <= pb && !maisDeCem) {

                pa *= ga;
                pb *= gb;

                ano++;

                if(ano > 100) maisDeCem = true;
            }

            if(maisDeCem) System.out.println("Mais de 1 seculo.");
            else System.out.println(ano + " anos.");

            n--;
        }


        scan.close();
    }
}