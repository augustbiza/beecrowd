// 1099 - Soma de Ímpares Consecutivos II
import java.io.IOException;
import java.util.Scanner;

public class bee1099 {
 
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        
        int n = scan.nextInt();
        for(; n > 0; n--) {
            
            int x, y; x = scan.nextInt(); y = scan.nextInt();
            int min = x, max = y; 
            if(x > y) {
                min = y; max = x;
            }
            min++;

            int sum = 0;
       
            for(; min < max; min++) if(min % 2 != 0) sum += min;
            
            System.out.println(sum);    
        }
        
        scan.close();
    }
 
}