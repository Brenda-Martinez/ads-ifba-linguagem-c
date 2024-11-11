import java.util.Scanner;

public class Main {

    static float soma(float x, float y){
        return x + y;
    }

    static float multiply(float x, float y){
        return x * y;
    }

    static boolean deseja_continuar(char escolha){
        if(escolha == 's'){
            return true;
        }else if(escolha == 'n'){
            System.out.println("Operacao finalizada.");
            return false;
        }else{
            System.out.println("Comando invalido. Operacao finalizada");
            return false;
        }
    }
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        boolean continuar = true;

        do{

            System.out.println("======== CALCULADORA ========");
            System.out.println("=========== IFBA ============\n");
            System.out.println("1. Soma\n2.Multiplicacao\n3.Sair\n");

            boolean repetir;

            do{
                int opcao;
                char opcao2;
                float n1, n2, op;

                System.out.println("Digite a operacao desejada: ");
                opcao = ler.nextInt();

                if(opcao == 1){
                    System.out.println("N1: ");
                    n1 = ler.nextFloat();ler.nextLine();
                    System.out.println("N2: ");
                    n2 = ler.nextFloat();ler.nextLine();

                    op = soma(n1, n2);

                    System.out.println(n1 + " + " + n2 + " = " + op);
                    System.out.println("Deseja continuar? [s/n]: ");
                    opcao2 = ler.next().charAt(0);
                    continuar = deseja_continuar(opcao2);
                    repetir = false;
                }else if(opcao == 2){
                    System.out.println("N1: ");
                    n1 = ler.nextFloat();ler.nextLine();
                    System.out.println("N2: ");
                    n2 = ler.nextFloat();ler.nextLine();

                    op = multiply(n1, n2);

                    System.out.println(n1 + " x " + n2 + " = " + op);
                    System.out.println("Deseja continuar? [s/n]: ");
                    opcao2 = ler.next().charAt(0);
                    continuar = deseja_continuar(opcao2);
                    repetir = false;
                }else if(opcao == 3){
                    System.out.println("Operacao finalizada.");
                    repetir = false;
                    continuar = false;
                }else{
                    System.out.println("Comando invalido. Digite um numero indicado nas opcoes.\n");
                    repetir = true;
                }

            }while(repetir);

        }while(continuar);

    }
}