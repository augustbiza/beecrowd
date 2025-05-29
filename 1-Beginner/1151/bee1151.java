// 1151 - Fibonacci Fácil
import java.io.IOException;
import java.util.Scanner; 

public class bee1151 {
 
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        
        
        int n1 = 0, n2 = 1, n3;
        System.out.print(n1 + " " + n2 + " ");
        
        int qt = scan.nextInt();
        for(; qt > 3; qt--) {
            
            n3 = n1+n2;
            System.out.print(n3 + " ");
            
            n1 = n2; n2 = n3;
        } 
        n3 = n1+n2; System.out.println(n3);
        
        scan.close();
    }
}