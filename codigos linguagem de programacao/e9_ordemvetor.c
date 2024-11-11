#include <stdio.h>

int main(void) {

  int tam = 10;
  int v[tam], auxiliar;

  for(int indice = 0; indice < tam; indice++)
  {
    printf("V[%i]: ", indice);
    scanf("%i", &v[indice]);
    getchar();
  }

  for(int i = 0; i < tam; i++)
  {
    for(int j = i + 1; j < tam; j++)
    {
      if(v[i] > v[j])
      {
        auxiliar = v[i];
        v[i] = v[j];
        v[j] = auxiliar;
      }

    }
  }

  printf("\n\n");
  printf("Ordem crescente: ");
  for(int indice = 0; indice < tam; indice++)
  {
    printf("%i ", v[indice]);
  }

  for(int i = 0; i < tam; i++)
  {
    for(int j = i + 1; j < tam; j++)
    {
      if(v[i] < v[j])
      {
        auxiliar = v[i];
        v[i] = v[j];
        v[j] = auxiliar;
      }

    }
  }
  
  printf("\n\n");
  printf("Ordem decrescente: ");
  for(int indice = 0; indice < tam; indice++)
  {
    printf("%i ", v[indice]);
  }
}