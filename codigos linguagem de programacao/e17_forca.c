#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {

  int tentativas = 10;
  int letras_acertadas = 0;
  char palavra[15] = "forca";

  int n_caracteres = strlen(palavra);
  char jogo[n_caracteres];

  for(int indice = 0; indice < n_caracteres; indice++)
  {
    jogo[indice] = '_';
  }

  printf("------------------------\n");
  printf("     JOGO DA FORCA\n");
  printf("------------------------\n");
  printf("DICA: metalinguagem\n\n\n");

  do
  {
    for(int indice = 0; indice < n_caracteres; indice++)
    {
      printf("%c ", jogo[indice]);
    }

    char letra;
    printf("\n\nDigite uma letra: ");
    scanf("%c", &letra);
    getchar();

    int existe = 0;

    for(int indice = 0; indice < n_caracteres; indice++)
    {
      if(letra == palavra[indice])
      {
        jogo[indice] = toupper(letra);
        existe = 1;
      }
    }

    if(existe == 0)
    {
      tentativas--;
      printf("\n* ERROU! *\nTentativas restantes: %i\n", tentativas);
    }
    else
    {
      letras_acertadas++;
    }

    printf("\n\n");
  }while((letras_acertadas < n_caracteres) && (tentativas > 0));

  if(letras_acertadas == n_caracteres)
  {
    printf("Parabens! Voce VENCEU!");
  }
  else
  {
    printf("Sinto muito. Voce perdeu.");
  }
}
