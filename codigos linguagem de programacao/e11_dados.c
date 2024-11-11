#include <stdio.h>

int main(void) {

float idade;
int opiniao;
float soma_idade = 0;
int regular = 0;
int bom = 0;
int excel = 0;

for(int i = 1; i <= 10; i++)
{
  printf("\nIdade: ");
  scanf("%f", &idade);

  printf("\n1.Excelente\n2.Bom\n3.Regular\n");
  printf("Opinião: ");
  scanf("%i", &opiniao);

  switch(opiniao)
  {
    case 1: excel++; 
  soma_idade = soma_idade + idade; break;
    case 2: bom++; break;
    case 3: regular++; break;
    default: printf("Opção inválida.");
  }
}

float perc_bom = ((float)bom/10)*100;

printf("\nA média das idades das pessoas que responderam 'Excelente' foi: %.2f", (float)soma_idade/excel);
printf("\n%i pessoas responderam regular", regular);
printf("\n%.1f por cento das pessoas responderam bom", perc_bom);
} 