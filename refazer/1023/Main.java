// 1023 - Estiagem
import java.io.IOException;
import java.util.Scanner;

class Consumo {
    int pessoas;
    int consumo;
    int index;

    public Consumo(int p, int c, int i) {
        this.pessoas = p;
        this.consumo = c;
        this.index = i;
    }

    public int taxa() {
        double t = Math.floor((double)consumo / pessoas);
        return (int)t;
    }

}

class Main {

    public static void insertion(Consumo array[], int n) {
        for(int i = 1; i < n; i++) {
            Consumo aux = array[i];
            int f = i-1;

            while(f >= 0 && array[f].taxa() > aux.taxa()) {
                array[f+1] = array[f];
                f--;
            }
            array[f+1] = aux;
        }
    }

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);

        int n;
        int cidade = 1;

        do{

            n = scan.nextInt();

            if(n != 0) {

                int a, b, c;
                int consumoT = 0, pessoasT = 0;
                double media = 0;

                Consumo[] array = new Consumo[n];

                for(int k = 0; k < n; k++) {

                    a = scan.nextInt(); b = scan.nextInt(); c = k+1;
                    array[k] = new Consumo(a, b, c);
                    pessoasT += a; consumoT += b; 
                }
                media = (double)consumoT/pessoasT;

                insertion(array, n);

                System.out.println("Cidade# " + (cidade++) + ":");
                for(Consumo i : array) {
                    System.out.print(i.pessoas + "-" + i.taxa() + " ");
                }
                System.out.printf("\nConsumo médio: %.2f m3.\n\n", media);
            }

        }while(n != 0);

        scan.close();
    }
}