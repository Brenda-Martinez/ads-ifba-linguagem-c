#include "stdio.h"

int main() {

int opcao = 0;
int lp = 0;
int fr = 0;
int isi = 0;
float nulo, branco, total;

while(opcao != 6)
{
  printf("\n========= ELEICOES 2022 ==========\n");
  printf("");
  printf("\n1. Candidato LP\n2. Candidato FR\n3. Candidato ISI\n4. Nulo\n5. Branco\n6. Apuracao\n\nEntre com o seu voto: ");
  scanf("%i", &opcao);

  switch(opcao)
  {
  case 1: lp++; break;
  case 2: fr ++; break;
  case 3: isi++; break;
  case 4: nulo++; break;
  case 5: branco++; break;
  default: nulo++; //coloquei nulo caso digite outra opcao para simular uma urna
  }

  total++;
  system("cls");
}

int vencedor = 0;
if(lp > vencedor)
{
  vencedor = lp;
}
else if(fr > vencedor)
{
  vencedor = fr;
}
else if(isi > vencedor)
{
  vencedor = isi;
}

printf("\nVotos:\n");
printf("\nLP: %i", lp);
printf("\nFR: %i", fr);
printf("\nISI: %i", isi);
printf("\n\nPorcentagem Nulos: %.2f", (100*nulo)/total);
printf("\n\nPorcentagem Brancos: %.2f", (100*branco)/total);

printf("\n\n=============================");

if(vencedor == lp)
{
  printf("\nO vencedor foi LP com %i votos.", lp);
}
else if(vencedor == fr)
{
  printf("\nO vencedor foi FR com %i votos.", fr);
}
else if(vencedor == isi)
{
  printf("\nO vencedor foi ISI com %i votos.", isi);
}

printf("\n=============================\n");
}
