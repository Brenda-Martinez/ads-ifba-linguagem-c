import java.util.Scanner;

public class Main {

    static boolean verificar_nota(float nota) {

        return nota >= 7;
    }
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        float[] nota_alunos = new float[10];
        boolean resultado;

        System.out.println("======== AVALIACAO 3 ========");
        System.out.println("=========== IFBA ============\n");
        System.out.println("OBS. INSIRA OS VALORES COMO NO EXEMPLO: 10,0\n");

        for(int i = 0; i <=9; i++){
            System.out.printf("NOTA ALUNO %d: ", i+1);
            nota_alunos[i] = ler.nextFloat();
        }

        System.out.println("=============================\n");

        for(int i = 0; i <= 9; i++){
            resultado = verificar_nota(nota_alunos[i]);

            if(resultado){
                System.out.printf("ALUNO %d foi APROVADO em linguagem de programacao.", i+1);
            }else{
                System.out.printf("ALUNO %d foi REPROVADO em linguagem de programacao.", i+1);
            }

            System.out.println("\n");
        }
    }
}