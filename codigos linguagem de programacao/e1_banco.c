#include <stdio.h>

int main() {

char resp = 's';
int opcao;
int cont_saque = 0;
int cont_transf = 0;
float saldo = 0;
float saque, transf;

while(resp == 's')
{
  printf("\n----- MENU BANCO -----\n");
  printf("1. Saldo em conta corrente\n");
  printf("2. Extrato bancario\n");
  printf("3. Sacar dinheiro\n");
  printf("4. Transferencia\n");
  printf("Opcao: ");
  scanf("%i", &opcao);

  switch(opcao)
  {
  case 1:
    system("cls");
    printf("\nVoce escolheu verificar o saldo.\n");
    printf("\n====================================\n");
    printf("Voce possui R$ %.2f em sua conta\n", saldo);
    printf("====================================\n");
    break;
  case 2:
    system("cls");
    printf("\nVoce escolheu retirar o extrato.\n");
    printf("Imprimindo Extrato . . .\n");
    printf("\n====================================\n");
    printf("                Extrato\n");
    printf("====================================\n");
    printf("Voce realizou %i saques e %i transferencias.\n", cont_saque, cont_transf);
    printf("====================================\n");
    break;
  case 3:
    system("cls");
    printf("\nVoce escolheu sacar dinheiro.\n");
    printf("\n====================================\n");
    printf("Informe o valor que deseja retirar: ");
    scanf("%f", &saque);
    printf("====================================\n");
    if(saque > saldo){
      printf("\nVoce nao possui saldo suficiente para retirar esse valor. \n");
    }else{
      saldo = saldo - saque;
      cont_saque++;
      printf("\nOperacao realizada com sucesso.\n");
    }
    break;
  case 4:
    system("cls");
    printf("\nVoce escolheu realizar uma transferencia.\n");
    printf("\n====================================\n");
    printf("Informe o valor que deseja transferir: ");
    scanf("%f", &transf);
    printf("====================================\n");
    saldo = saldo + transf;
    cont_transf++;
    printf("\nOperacao realizada com sucesso.\n");
    break;
  default: printf("\nOPÇÃO INVÁLIDA!");
  }

  getchar();
  printf("\nDeseja realizar outra operacao? [s/n]: ");
  scanf("%c", &resp);
  system("cls");
}

printf("Operacao finalizada.");

}
