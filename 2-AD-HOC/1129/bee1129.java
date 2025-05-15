// 1129 - Leitura Ótica
import java.io.IOException;
import java.util.Scanner;

class bee1129 {

    public static int[] lerProva(Scanner scan, int[] prova, int n) {
        for(int i = 0; i < n; i++) prova[i] = scan.nextInt();

        return prova;
    }

    public static char corrigir(int[] prova, int n) {
        
        char resp = '*';
        int marcadas = 0;

        for(int i = 0; i < n; i++) {
            
            if(prova[i] <= 127) {
                marcadas++;
                if(marcadas == 1) resp = (char)('A' + i);
            }
        }

        return (qt == 1) ? resp : '*';
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int n;
        int[] prova = new int[5];
        char resp;

        do{

            n = scan.nextInt();

            if(n != 0) {

                for(int i = 0; i < n; i++) {

                    prova = lerProva(scan, prova, 5);

                    resp = corrigir(prova, 5);

                    System.out.println(resp);
                }
            }

        }while(n != 0);

        scan.close();
    }
}