#include <stdio.h>

int main(void) {

  int idade;
  int quant_total = 0;
  float total = 0;

  printf("Digite sua idade: ");
  scanf("%i", &idade);

  if(idade >= 18)
  {
    char continua = 's';
    while(continua == 's'){
        int opcao;

        printf("\n1. Whisky\n2. Vodka\n3. Cerveja\n4. Vinho\n\nDigite a opcao desejada: ");
        scanf("%i", &opcao);

        float valor;
        int opcao2, quant;

        switch(opcao)
        {
          case 1: printf("\n100. Whisky1 100$\n101. Whisky2 120$\n102. Whisky3 130$\n\nDigite a opcao desejada: ");
          scanf("%i", &opcao2);
          printf("\nDigite a quantidade desejada: ");
          scanf("%i", &quant);
          if(quant >=1)
          {
            switch(opcao2)
            {
              case 100: valor = quant*100; break;
              case 101: valor = quant*120; break;
              case 102: valor = quant*130; break;
              default: printf("Codigo invalido.");
            }
            quant_total = quant_total + quant;
            total = total + valor;
          }
          else
          {
            printf("Quantidade invalida.");
          } break;
          case 2: printf("\n200. Vodka1 30$\n201. Vodka2 80$\n202. Vodka3 100$\n\nDigite a opcao desejada: ");
          scanf("%i", &opcao2);
          printf("\nDigite a quantidade desejada: ");
          scanf("%i", &quant);
          if(quant >=1)
          {
            switch(opcao2)
            {
              case 200: valor = quant*30; break;
              case 201: valor = quant*80; break;
              case 202: valor = quant*100; break;
              default: printf("Codigo invalido.");
            }
            quant_total = quant_total + quant;
            total = total + valor;
          }
          else
          {
            printf("Quantidade invalida.");
          } break;
          case 3: printf("\n300. Cerveja1 3$\n301. Cerveja2 4$\n302. Cerveja3 5$\n\nDigite a opcao desejada: ");
          scanf("%i", &opcao2);
          printf("\nDigite a quantidade desejada: ");
          scanf("%i", &quant);
          if(quant >=1)
          {
            switch(opcao2)
            {
              case 300: valor = quant*3; break;
              case 301: valor = quant*4; break;
              case 302: valor = quant*5; break;
              default: printf("Codigo invalido.");
            }
            quant_total = quant_total + quant;
            total = total + valor;
          }
          else
          {
            printf("Quantidade invalida.");
          } break;
          case 4: printf("\n400. Vinho1 20$\n401. Vinho2 150$\n402. Vinho3 10000$\n\nDigite a opcao desejada: ");
          scanf("%i", &opcao2);
          printf("\nDigite a quantidade desejada: ");
          scanf("%i", &quant);
          if(quant >=1)
          {
            switch(opcao2)
            {
              case 400: valor = quant*20; break;
              case 401: valor = quant*150; break;
              case 402: valor = quant*10000; break;
              default: printf("Codigo invalido.");
            }
            quant_total = quant_total + quant;
            total = total + valor;
          }
          else
          {
            printf("Quantidade invalida.");
          } break;
          default: printf("Opcao invalida.");
        }

        getchar();
        printf("\n\nDeseja continuar? [s/n]:");
        scanf("%c", &continua);
        system("cls");
    }
  }
  else
  {
    printf("Voce nao tem permissao para comprar bebidas.");
  }
  //desconto
    if(quant_total >= 5)
    {
        total = total - (total*0.1);
    }
    else if(quant_total >= 10)
    {
        total = total - (total*0.2);
    }
    //fim desconto
    printf("\nVoce comprou %i bebida(s) , totalizando %f reais\n", quant_total, total);
}
