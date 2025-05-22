// 2729 - Shopping List
import java.io.IOException;
import java.util.*;

public class Main {

    public static void swap(String[] lista, int i, int j) {
        String aux = lista[i]; lista[i] = lista[j]; lista[j] = aux;
    }
   
    public static void quick(String[] lista, int in, int fim) {
        
        int i = in, f = fim;
        String pivo = lista[(in+fim)/2];
        
        while(i <= f) {
            
            while(lista[i].compareToIgnoreCase(pivo) < 0) i++;
            while(lista[f].compareToIgnoreCase(pivo) > 0) f--;

            if(i <= f) {
                swap(lista, i, f);
                i++; f--;
            }
        }

        if(i < fim) quick(lista, i, fim);
        if(in < f) quick(lista, in, f);
    }

    public static void quicksort(String[] lista) {
        quick(lista, 0, lista.length-1);
    }

    public static void verificaRepeticao(ArrayList<String> lista, String[] array) {
        int n = array.length;

        if(n < 2) return;

        lista.add(array[0]);

        for(int i = 0; i < n-1; i++) {
            int j = i+1;
            if(!array[i].equals(array[j])) lista.add(array[j]);
        }
    }
   
	public static void main(String[] args) throws IOException{
        Scanner scan = new Scanner(System.in);
	    
        String input = new String();
	    String[] array;

        int n = scan.nextInt(); scan.nextLine();

        for(; n > 0; n--) {

            input = scan.nextLine();
            array = input.split(" ");
            quicksort(array);

            ArrayList<String> lista = new ArrayList<String>();
            verificaRepeticao(lista, array);
            
            for(int i = 0; i < lista.size()-1; i++) System.out.print(lista.get(i) + " ");
            System.out.println(lista.get(lista.size()-1));
        }
    
        scan.close();
    }
}
