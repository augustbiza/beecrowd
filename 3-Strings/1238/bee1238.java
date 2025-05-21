// 1238 - Combinador
import java.io.IOException;
import java.util.Scanner;

class bee1238 {

    public static String combinador(String a, String b) {

        StringBuilder res = new StringBuilder();

        int tamA = a.length(); int tamB = b.length();
        int pA = 0, pB = 0;

        while(pA < tamA || pB < tamB) {

            if(pA < tamA) res.append(a.charAt(pA++));
            if(pB < tamB) res.append(b.charAt(pB++));
        }

        return res.toString();
    }

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt(); scan.nextLine();
        for(; n > 0; n--) {

            String[] partes = scan.nextLine().split(" ", 2);
            String a = partes[0];
            String b = partes[1];

            String res = combinador(a, b);

            System.out.println(res);
        }

        scan.close();
    }
}