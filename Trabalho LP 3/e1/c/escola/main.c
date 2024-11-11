#include <stdio.h>

int verificar_nota(float nota){

    // aprovado - 1, reprovado - 0

    if(nota >= 7){
        return 1;
    }else{
        return 0;
    }

}

int main()
{
    float nota_alunos[9];
    int resultado;

    printf("======== AVALIACAO 3 ========\n");
    printf("=========== IFBA ============\n");

    printf("\nOBS. INSIRA OS VALORES COMO NO EXEMPLO: 10.0\n\n");

    for(int i = 0; i <=9; i++){
        printf("NOTA ALUNO %i: ", i+1);
        scanf("%f", &nota_alunos[i]);
    }

    printf("=============================\n");
    printf("\n\n");

    for(int i = 0; i <= 9; i++){
       resultado = verificar_nota(nota_alunos[i]);

       if(resultado == 1){
            printf("ALUNO %i foi APROVADO em linguagem de programacao.", i+1);
       }

       if(resultado == 0){
            printf("ALUNO %i foi REPROVADO em linguagem de programacao.", i+1);
       }

       printf("\n");
    }

    system("pause");
}
