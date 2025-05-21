// 1068 - Balanço Parênteses I
import java.io.IOException;
import java.util.Scanner;

public class Main {
    
    public static boolean parenteses(String str) {
        int paren = 0;
        
        for(int i = 0; i < str.length() && paren != -1; i++) {
            if(str.charAt(i) == '(') paren++;
            else if(str.charAt(i) == ')') paren--;
        }
        
        return (paren != 0) ? false : true;
    }
 
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner (System.in);
        
        while(scan.hasNext()) {
            String input = scan.nextLine();
            
            if(parenteses(input)) System.out.println("correct");
            else System.out.println("incorrect");
        }
        
        scan.close();
    }
 
}