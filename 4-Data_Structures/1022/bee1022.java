// 1022 - TDA Racional
import java.io.IOException;
import java.util.Scanner;

class bee1022 {

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);

        int k = scan.nextInt(); scan.nextLine();

        for(; k > 0; k--) {

            String[] input = scan.nextLine().split(" ");

            int n1, d1, n2, d2, n = 1, d = 1;
            char op1, op2, op;
            n1 = Integer.parseInt(input[0]);
            op1 = input[1].charAt(0);
            d1 = Integer.parseInt(input[2]);
            op = input[3].charAt(0);
            n2 = Integer.parseInt(input[4]);
            op2 = input[5].charAt(0);
            d2 = Integer.parseInt(input[6]);

            switch(op) {
                case '+':   d = d1*d2;
                            n = (d2*n1)+(d1*n2);
                            break;

                case '-':   d = d1*d2;
                            n = (d2*n1)-(d1*n2);
                            break;

                case '*':   d = d1*d2;
                            n = n1*n2;
                            break;

                case '/':   d = d1*n2;
                            n = n1*d2;
                            break;
            }

            System.out.print(n + "/" + d + " = ");

            boolean negativo = false;
            if(n < 0) {
                negativo = true;
                n *= -1;
            }

            int menor = n; if(d < n) menor = d;

            for(int i = menor; i > 1; i--) {
                if((n % i == 0) && (d % i == 0)) {
                    n /= i;
                    d /= i;
                }
            }

            if(negativo) n *= -1;

            System.out.println(n + "/" + d);
        }

        scan.close();
    }
}