// 1101 - Sequência de Números e Soma
import java.io.IOException;
import java.util.Scanner; 

public class bee1101 {
 
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        
        int m, n;
        
        do{
            m = scan.nextInt(); n = scan.nextInt();
            if(m > 0 && n > 0) {
                
                int max = m, min = n;
                if(m < n) { 
                    max = n; min = m;
                }
                
                int sum = 0;
                
                for(; min <= max; min++) {
                    System.out.print(min + " ");
                    sum += min;
                }
                
                System.out.println("Sum=" + sum);
            }
            
        }while(m > 0 && n > 0);
 
        scan.close();
    }
 
}