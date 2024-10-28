import java.io.IOException;
import java.util.Scanner;

class Main {

    public static void main(String []args) throws IOException {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt(), num;

        int []arr = new int[2001];  //contabilizar a frequencia de cada numero na posição 'exata' em um array de 2001
                                    //ex.: num = 3 -> arr[3] +=1;  num = 1057 -> arr[1057] +=1;
        for(int c = 0; c < n; c++) {

            num = scan.nextInt();
            arr[num] += 1;

        }

        for(int c = 0; c < 2001; c++) {

            if(arr[c] > 0) System.out.println(c+" aparece "+arr[c]+" vez(es)");
        }
        //o elemento da posição 'c', que é o número que foi digitado, aparece arr[c] vezes


        scan.close();
    }
}