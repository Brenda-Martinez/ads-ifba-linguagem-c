#include <stdio.h>

void main (){

char c;

printf("Digite uma letra: ");
scanf("%c", &c);

for (char i = c; i <= 'z'; i++)
{
  printf("%c\n", i);
}

}