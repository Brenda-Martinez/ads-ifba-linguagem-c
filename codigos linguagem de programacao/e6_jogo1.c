#include <stdio.h>

int main(void) {

  char tecla;
  char continua = 's';

  while(continua == 's'){
      printf("\nBem vindo ao Jogo!!\n");
      printf("----------------------\n\n");
      printf("         ()         \n");
      printf("        /[]|         \n");
      printf("         ||           \n");
      printf("----------------------\n");
      printf("Movimente seu personagem! (w,a,s,d,space + enter)\n");
      scanf("%c", &tecla);

      getchar();

      switch(tecla)
      {
        case 'a':
          printf("\nVoce deu 1 passo a esquerda.");
          printf("\n----------------------\n\n");
          printf("         ()         \n");
          printf("        |[]|         \n");
          printf("         /|           \n");
          printf("----------------------\n");
          printf("\n\n");
          printf("   ()         \n");
          printf("  |[]|         \n");
          printf("   ||           \n");
          printf("----------------------\n");
          break;
        case 'd':
          printf("\nVoce deu 1 passo a direita.");
          printf("\n----------------------\n\n");
          printf("         ()         \n");
          printf("        |[]|         \n");
          printf("         |/           \n");
          printf("----------------------\n");
          printf("\n\n");
          printf("                  () \n");
          printf("                 |[]| \n");
          printf("                  ||  \n");
          printf("----------------------\n");
          break;
        case 'w':
          printf("\nVoce deu 1 passo a frente");
          printf("\n----------------------\n\n");
          printf("         ()         \n");
          printf("        |[]|         \n");
          printf("         /|           \n");
          printf("----------------------\n");
          printf("\n\n");
          printf("         ( )         \n");
          printf("        |[ ]|         \n");
          printf("         | |           \n");
          printf("----------------------\n");
          break;
        case 's':
          printf("\nVoce deu 1 passo para atras");
          printf("\n----------------------\n\n");
          printf("         ()         \n");
          printf("        |[]|         \n");
          printf("         |/           \n");
          printf("----------------------\n");
          printf("\n\n");
          printf("         O/         \n");
          printf("        /|         \n");
          printf("        /|           \n");
          printf("----------------------\n");
          break;
        case ' ':
          printf("\nVoce pulou.");
          printf("\n----------------------\n\n");
          printf("         ()         \n");
          printf("        /[]|         \n");
          printf("         ||           \n");
          printf("----------------------\n");
          printf("         ()/         \n");
          printf("        /[]         \n");
          printf("         ||         \n");
          printf("\n\n");
          printf("----------------------\n");
          printf("\n\n");
          printf("         ()         \n");
          printf("        |[]|         \n");
          printf("         ||           \n");
          printf("----------------------\n");
          break;
        default: printf("Voce nao fez nada.");
      }

      char opcao;

      printf("\n\nDeseja abrir o menu? (s/n): ");
      scanf("%c", &opcao);

      getchar();

      if(opcao == 's')
      {
        char tecla2;

        printf("\ns: especial\nh: pocao de saude\nj: pocao de mana\n");
        scanf("%c", &tecla2);

        switch(tecla2)
        {
          case 's':
            printf("Voce usou o seu especial.");
            printf("\n----------------------\n\n");
            printf("         ()/ * º ○     \n");
            printf("        /[]        O  \n");
            printf("         ||          0 \n");
            printf("----------------------\n");
            printf("\n\n");
            printf("     _.-^^---....,,--       \n");
            printf(" _--                  --_  \n");
            printf("<                        >)\n");
            printf("|                         | \n");
            printf(" <._                   _./  \n");
            printf("    ```--. . , ; .--'''       \n");
            printf("          | |   |             \n");
            printf("       .-=||  | |=-.   \n");
            printf("       `-=#$º&º$#=-'   \n");
            printf("          | ;  :|     \n");
            printf(" _____.,-#º&$@º#&#~,._____\n");
            break;
          case 'h':
            printf("Voce bebeu uma pocao de saude.");
            printf("\n----------------------\n\n");
            printf("       . ()         \n");
            printf("       o/[]|          \n");
            printf("         ||           \n");
            printf("----------------------\n");
            printf("\n\n");
            printf("         ()/!         \n");
            printf("        |[]          \n");
            printf("         ||           \n");
            printf("----------------------\n");
            break;
          case 'j':
            printf("Voce bebeu uma pocao de mana.");
            printf("\n----------------------\n\n");
            printf("       . ()         \n");
            printf("       o/[]|          \n");
            printf("         ||           \n");
            printf("----------------------\n");
            printf("\n\n");
            printf("         ()/!         \n");
            printf("        |[]          \n");
            printf("         ||           \n");
            printf("----------------------\n");
            break;
          default: printf("Voce nao fez nada.");
        }
      }
      else
      {
        printf("Voce nao fez nada.");
      }

      getchar();
      printf("\nDeseja continuar? [s/n]: ");
      scanf("%c", &continua);
      getchar();
      system("cls");
  }
}
