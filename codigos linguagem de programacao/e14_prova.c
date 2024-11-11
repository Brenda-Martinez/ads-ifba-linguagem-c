#include <stdio.h>

int main(void) {

  int alunos = 5;
  int quest = 10;
  char matriz_respostas[alunos][quest];
  char gabarito[quest];

  for(int linha = 0; linha < alunos; linha++)
  {
    printf("-----RESPOSTAS ALUNO %i-----", linha+1);
    printf("\n\n");
    for(int coluna = 0; coluna < quest; coluna++)
    {
        char opcao;
        int valida;
        do{
          valida = 1;

          printf("Questao %i: ", coluna+1);
          scanf("%c", &opcao);
          getchar();

          switch(opcao){
                case 'a':
                    matriz_respostas[linha][coluna] = 'a';
                    break;
                case 'b':
                    matriz_respostas[linha][coluna] = 'b';
                    break;
                case 'c':
                    matriz_respostas[linha][coluna] = 'c';
                    break;
                case 'd':
                    matriz_respostas[linha][coluna] = 'd';
                    break;
                case 'e':
                    matriz_respostas[linha][coluna] = 'e';
                    break;
                default:
                    printf("Digite uma opcao valida [a/b/c/d/e].\n");
                    valida = 0;
              }

        }while(valida == 0);
    }
    printf("\n");
  }

  printf("\n");

  for(int indice = 0; indice < quest; indice++)
  {
    printf("Gabarito q. %i: ", indice+1);
    scanf("%c", &gabarito[indice]);
    getchar();
  }

  int resultado[alunos];

  for(int i = 0; i < alunos; i++)
  {
      resultado[i] = 0;
  }

  for(int linha = 0; linha < alunos; linha++)
  {
    for(int coluna = 0; coluna < quest; coluna++)
    {
      if(matriz_respostas[linha][coluna] == gabarito[coluna])
      {
        resultado[linha]++;
      }
    }
  }

  printf("\n\n");

  for(int indice = 0; indice < alunos; indice++)
  {
    printf("NOTA ALUNO %i: %i", indice+1, resultado[indice]);
    printf("\n");
  }

}
