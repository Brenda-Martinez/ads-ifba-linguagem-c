#include <stdio.h>
#include <time.h>

int main(void) {

  int maximo = 10;
  int q_mercadorias = 0;
  int cod[maximo], quant_em_estoque[maximo];
  char nomes[maximo][21];
  float preco[maximo];
  float preco_total;
  int controle = 0;
  int existe_3;

  for(int i = 0; i < maximo; i++){
    cod[i] = 0;
    quant_em_estoque[i] = 0;
    preco[i] = 0;
  }

  do{
    int opcao;
    printf("\nMENU\n\n");
    printf("1 - Cadastrar mercadoria\n");
    printf("2 - Consultar mercadoria\n");
    printf("3 - Valor total em mercadorias\n");
    printf("4 - Excluir mercadoria\n");
    printf("5 - Listar mercadorias\n");
    printf("6 - Sair\n");
    scanf("%i", &opcao);
    switch(opcao)
    {
      case 1:
        printf("\nCADASTRO DE NOVA MERCADORIA\n");
        int existe;
        int codigo;

        do{
          existe = 0;
            do{
              printf("Codigo da mercadoria: ");
              scanf("%i", &codigo);
              getchar();

              if(codigo == 0){
                printf("\nCodigo da mercadoria nao pode ser nulo.\n\n");
              }
            }while(codigo == 0);

          for(int i = 0; i < q_mercadorias; i++)
          {
            if(codigo == cod[i])
            {
              existe = 1;
              break;
            }
          }

          if(existe == 1)
          {
            printf("\nMercadoria com esse codigo ja cadastrada. Digite outro codigo.\n");
          }

          }while(existe == 1);

        printf("Nome da mercadoria: ");
        fgets(nomes[q_mercadorias], 21, stdin);
        int qtd_estoque;
        printf("Quantidade em estoque: ");
        scanf("%i", &qtd_estoque);
        getchar();
        float preco_merc;
        printf("Preco da mercadoria: ");
        scanf("%f", &preco_merc);
        getchar();

        cod[q_mercadorias] = codigo;
        quant_em_estoque[q_mercadorias] = qtd_estoque;
        preco[q_mercadorias] = preco_merc;
        q_mercadorias++;
        printf("Mercadoria %i cadastrada\n", codigo);
        break;
      case 2:
        printf("\nCONSULTA DE MERCADORIA\n");
        int cod_produto, indice;
        int existe_1 = 0;
        printf("Informe o codigo do produto: ");
        scanf("%i", &cod_produto);
        getchar();

        for(int i = 0; i < q_mercadorias; i++)
        {
          if(cod_produto == cod[i])
          {
            existe_1 = 1;
            indice = i;
            break;
          }
        }

        if(existe_1 == 1)
        {
          printf("\n");
          printf("Nome da mercadoria: ");
          puts(nomes[indice]);
          printf("Quantidade em estoque: %i\n\n", quant_em_estoque[indice]);
          printf("Preco: %.2f\n\n", preco[indice]);
        }

        if (existe_1 == 0)
        {
          printf("Produto nao existe.\n\n");
        }
        system("pause");
        break;
      case 3:
        printf("\nVALOR TOTAL DO ESTOQUE:");
        preco_total = 0;

        for(int indice = 0; indice < q_mercadorias; indice++)
        {
          preco_total = preco_total + (quant_em_estoque[indice] * preco[indice]);
        }
        printf("R$ %f\n", preco_total);
        system("pause");
        break;
      case 4:
        printf("\nEXCLUIR MERCADORIA EXISTENTE\n");
        int existe_2;
        int codigo_exc;

        do{
          existe_2 = 1;

          printf("Informe o codigo do produto: ");
          scanf("%i", &codigo_exc);
          getchar();

          for(int i = 0; i < q_mercadorias; i++)
          {
            if(codigo_exc == cod[i])
            {
              existe_2 = 2;
              indice = i;
              break;
            }else{
              existe_2 = 0;
            }
          }

         if(existe_2 == 2)
          {
            cod[indice] = 0;
            memset(nomes[indice],NULL,21);
            quant_em_estoque[indice] = 0;
            preco[indice] = 0; //null nao funciona
            q_mercadorias--;
          }

          if (existe_2 == 0)
          {
            printf("Produto nao existe. Digite um codigo valido.\n");
          }

          }while(existe_2 == 0);
        break;
      case 5:
        if(q_mercadorias > 0){
            printf("=== MERCADORIAS CADASTRADAS ===\n");
            printf("===============================\n\n");

            for(int i = 0; i < maximo; i++){

                if(cod[i] != 0){
                    printf("Codigo da mercadoria: %i\n\n", cod[i]);
                    printf("Nome da mercadoria: ");
                    puts(nomes[i]);
                    printf("Quantidade em estoque: %i\n\n", quant_em_estoque[i]);
                    printf("Preco: %.2f\n", preco[i]);
                    printf("\n===============================\n");
            }
            }
        }
        else{
            printf("\nNao ha mercadorias cadastradas.\n");
        }
        system("pause");
        break;
      case 6:
        printf("Programa encerrado.");
        sleep(10);
        controle = 1;
        break;
      default:
        printf("\n===================\n");
        printf("Opcao invalida.\n");
        printf("===================\n");
        break;
    }

    system("cls");

  }while(controle != 1);

}
