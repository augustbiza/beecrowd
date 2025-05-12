// 1091 - Divisão da Nlogônia
import java.io.IOException;
import java.util.Scanner;

class bee1091 {

    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int n;

        do{
            n = scan.nextInt();

            if(n != 0) {

                int pX, pY;
                pX = scan.nextInt(); pY = scan.nextInt();

                int rX, rY;
                for(int i = 0; i < n; i++) {
                    rX = scan.nextInt(); rY = scan.nextInt();

                    if(rX == pX || rY == pY) System.out.println("divisa");
                    else if(rX > pX) {
                        if(rY > pY) System.out.println("NE");
                        else if(rY < pY) System.out.println("SE");
                    }
                    else if(rX < pX) {
                        if(rY > pY) System.out.println("NO");
                        else if(rY < pY) System.out.println("SO");
                    }
                }
            }

        }while(n != 0);

        scan.close();
    }
}