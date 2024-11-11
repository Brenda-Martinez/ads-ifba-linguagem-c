#include <stdio.h>

int main() {

int num;
int cont = 0;

printf("Digite um número: ");
scanf("%i", &num);

while(cont <= 10)
{
  printf("%i x %i = %i\n", num, cont, num*cont);
  cont++;
}
}