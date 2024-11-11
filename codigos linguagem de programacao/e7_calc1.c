#include <stdio.h>
#include <math.h>

int main(void) {
  
  int opcao;

  printf("\nMenu\n\n1. Raíz quadrada\n2. Potenciação\n\nDigite a opção desejada: ");
  scanf("%i", &opcao);

  float n1, n2;

  switch(opcao)
  {
    case 1:
      printf("Digite um número: ");
      scanf("%f", &n1);
      if(n1 >= 0){
        printf("\nA raíz quadrada de %f é %f", n1, sqrt(n1));
      }else{
        printf("Não existe raíz REAL para um número negativo.");
      }
      break;
    case 2:
      printf("Digite a base: ");
      scanf("%f", &n1);
      getchar();
      printf("Digite o expoente: ");
      scanf("%f", &n2);
      printf("\n%f elevado a %f é %f", n1, n2, (pow(n1, n2)));
      break;
    default: printf("ERRO!");
  }
}