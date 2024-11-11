#include <stdio.h>

int main(void){

    int tam = 20;
    int v[tam];
    int sem_repetidos[tam];
    int n_repetidos = 0;
    int auxiliar;

    for(int indice = 0; indice < tam; indice++){
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

    int j = 0;

    for(int i = 0; i < tam; i++)
    {
        for( j = 0; j < n_repetidos; j++ )
        {
            if( v[i] == sem_repetidos[j] )
                break;
        }

        if( j == n_repetidos )
        {
            sem_repetidos[n_repetidos] = v[i];
            n_repetidos++;
        }
    }

      printf("\n\n");
      printf("Vetor original: ");
      for(int indice = 0; indice < tam; indice++)
      {
        printf("%i ", v[indice]);
      }
      printf("\n\n");
      printf("Vetor sem os numeros repetidos: ");
      for(int indice = 0; indice < n_repetidos; indice++)
      {
        printf("%i ", sem_repetidos[indice]);
      }

      printf("\n");
      system("pause");

    return 0;
}
