// 1110 - Jogando Cartas Fora
import java.io.IOException;
import java.util.*;

class Carta {
    int num;
    Carta ant, prox;

    public Carta() { this(0); }
    public Carta(int x) {
        this.num = x;
        this.ant = null;
        this.prox = null;
    }
}

class Baralho {
    Carta topo, fim;

    public Baralho() {
        this.topo = null;
        this.fim = null;
    }

    public void construirBaralho(int x) {

        Carta aux = new Carta(x);

        if(topo == null) {
            topo = aux;
            fim = aux;
        }
        else {
            fim.prox = aux;
            aux.ant = fim;
            fim = aux;
        }
    }

    public int removerCarta() throws Exception {    //remover primeira carta

        if(topo == null) throw new Exception("Baralho Vazio!\n");

        int removido = topo.num;
        Carta aux = topo;
        topo = topo.prox;

        if(topo == null) {      //se só tiver uma carta
            fim = null;
        }
        else {
            topo.ant = null;
        }
        aux.prox = null;
        aux = null;

        return removido;
    }

    public void inserirCarta() throws Exception {    //mover primeira carta para o fim
    
        if(topo.prox != null) {

            Carta aux = topo;
            topo = topo.prox;
            topo.ant = null;

            aux.ant = fim;
            aux.prox = null;
            fim.prox = aux;
            fim = fim.prox;
            aux = null;
        }

    }

    public void mostrarBaralho() {
        
        Carta aux = topo;

        while(aux != null) {
            System.out.print(aux.num + " ");
            aux = aux.prox;
        } System.out.println();
    }
}

class bee1110 {

    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);

        int n;

        do{

            n = scan.nextInt();
            if(n != 0) {
                
                Baralho baralho = new Baralho();
                ArrayList<Integer> descartadas = new ArrayList<Integer>();
                
                for(int i = 0; i < n; i++) {
                    baralho.construirBaralho(i+1);
                }

                while(baralho.topo.prox != null) {
                    descartadas.add(baralho.removerCarta());
                    baralho.inserirCarta();    
                }

                System.out.print("Discarded cards: ");
                for (int i = 0; i < descartadas.size(); i++) {
                    if (i > 0) System.out.print(", ");
                    System.out.print(descartadas.get(i));
                }
                System.out.println();

                System.out.println("Remaining card: " + baralho.topo.num);
            }

        }while(n != 0);

        scan.close();
    }
}