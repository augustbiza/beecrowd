// 1094 - Experiências
import java.io.IOException;
import java.util.Scanner;

class bee1094 {

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);

        int cobaias = 0, coelhos = 0, ratos = 0, sapos = 0;
        int qt; String animal;

        int n = scan.nextInt(); scan.nextLine();
        for(; n > 0; n--) {

            String[] input = scan.nextLine().split(" ");
            qt = Integer.parseInt(input[0]);
            animal = input[1];

            cobaias += qt;
            if(animal.toUpperCase().equals("C")) coelhos += qt;
            else if(animal.toUpperCase().equals("R")) ratos += qt;
            else if(animal.toUpperCase().equals("S")) sapos += qt;
            else qt += 0;
        }

        System.out.println("Total: " + cobaias + " cobaias\nTotal de coelhos: " + coelhos + "\nTotal de ratos: " + ratos + "\nTotal de sapos: " + sapos);
        System.out.printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", ((double)coelhos/cobaias)*100, ((double)ratos/cobaias)*100, ((double)sapos/cobaias)*100);
        scan.close();
    }
}