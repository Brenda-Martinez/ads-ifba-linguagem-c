#include <stdio.h>

int main(void) {
  char nome[25];

  printf("Digite um nome: ");
  fgets(nome, 25, stdin);

  int quantidade = 0;
  
  for(int indice = 0; nome[indice] != '\0'; indice++)
  {
      quantidade++;
  }

  nome[quantidade-1] = '\0';
  quantidade = quantidade - 1;

  for(int indice = quantidade; indice >= 0; indice--)
  {
    printf("%c", nome[indice]);
  }
}