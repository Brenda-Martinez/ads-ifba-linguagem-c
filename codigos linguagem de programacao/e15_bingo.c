#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  srand(time(NULL));
  
  int cartela[3][3];
  
  int valores_existentes[9];
  int n_valores_adicionados = 0;

  for(int linha = 0; linha < 3; linha++)
  {
    for(int coluna = 0; coluna < 3;) 
    {
      int numero;
      int existe; 

      do
      {
        existe = 0;

        numero = rand() % 100;

        for(int indice = 0; indice < n_valores_adicionados; indice++)
        {
          if(numero == valores_existentes[indice])
          {
            existe = 1;
            break;
          }
        }
      }while(existe == 1);

      if(existe == 0)
      {
        valores_existentes[n_valores_adicionados] = numero;

        n_valores_adicionados++;

        cartela[linha][coluna] = numero;
        coluna++;
      }
    }
  }

  for(int linha = 0; linha < 3; linha++)
  {
    for(int coluna = 0; coluna < 3; coluna++)
    {
      printf("%i ", cartela[linha][coluna]);
    }
    printf("\n");
  }
  
  }