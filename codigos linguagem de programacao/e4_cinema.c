#include <stdio.h>

int main(void){

  int idade, opcao;

  printf("Digite sua idade: ");
  scanf("%i", &idade);

  printf("\n1. Bastardos Inglórios (16 anos)\n2. O Show de Truman (Livre)\n3. Clube da Luta (18 anos)\n4. O Poderoso Chefão (14 anos)\n5. Sair\n");

  printf("\nDigite a opcao desejada: ");
  scanf("%i", &opcao);

  if(opcao == 5)
  {
    printf("Operação finalizada.");
  }
  else
  {
    if(opcao == 1)
    {
      if(idade < 16)
      {
        printf("Você não tem idade para assistir ao filme.");
      }
      else
      {
        printf("Você comprou o filme Bastardos Inglórios. Bom filme!");
      }
    }
    else if(opcao == 2)
    {
      printf("Você comprou o filme O Show de Truman. Bom filme!");
    }
    else if(opcao == 3)
    {
      if(idade < 18)
      {
        printf("Você não tem idade para assistir ao filme.");
      }
      else
      {
        printf("Você comprou o filme Clube da Luta. Bom filme!");
      }
    }
    else if(opcao == 4)
    {
      if(idade < 14)
      {
        printf("Você não tem idade para assistir ao filme.");
      }
      else
      {
        printf("Você comprou o filme O Poderoso Chefão. Bom filme!");
      }
    }
  }
}
