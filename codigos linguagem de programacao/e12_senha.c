#include <stdio.h>
#include <string.h>

int main(void) {

char senha[9] = "password";
  
char senha_inserida[25];
int limite_tentativas = 1;

while(limite_tentativas <= 3)
{
  printf("\nSenha: ");
  gets(senha_inserida);
  //tb pode ser fgets(senha_inserida, 9, stdin);
  
  if(strcmp(senha, senha_inserida) == 0)
  {
    printf("Senha Correta."); break;
  }
  else
  {
    printf("Senha Incorreta.");
  }
  limite_tentativas++;
}

if(limite_tentativas > 3)
{
  printf("\nAcesso bloqueado.");
}
}