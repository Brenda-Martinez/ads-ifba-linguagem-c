#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  srand(time(NULL));

  int qtd_lanc;

  printf("Quantas vezes lançar dado: ");
  scanf("%i", &qtd_lanc);

  //lançamentos
  for(int i = 1; i <= qtd_lanc; i++)
  {
    int d1, d2;
    d1 = 1 + rand() % 6;
    d2 = 1 + rand() % 6;

    printf("\nLançamento %i:\n", i);
    printf("D1 = %i ------ D2 = %i", d1, d2);
    printf("\t");

    if(d1 > d2)
    {
      printf(" D1 > D2");
    }
    else if(d1 < d2)
    {
      printf(" D1 < D2");
    }
    else
    {
      printf(" D1 = D2");
    }

    printf("\n");
  }
  //fim lançamentos
}