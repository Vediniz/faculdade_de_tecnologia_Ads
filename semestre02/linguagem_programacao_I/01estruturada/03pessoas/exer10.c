#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

  char sexo,sex;
  float altura, maior, soma,media;
  int i,n,k,m;
  m=0;
  k=0;
  maior =0;

  printf("\n Informe a quantidade de Pessoas");
  scanf("%d",&n);
  fflush(stdin);

  for(i=1;i<=n;i++)
  {

  printf("\n Informe a altura da pessoa");
  scanf("%f",&altura);
  fflush(stdin);


  printf("\n Informe o Sexo da Pessoa");
  scanf("%c",&sexo);
  fflush(stdin);
  sexo =toupper(sexo);

  while (sexo != 'M' && sexo != 'F')
  {
      printf("\n Invalida entrada de dados relacionado ao sexo..\n");
      scanf("%c",&sexo);
      sexo = toupper(sexo);
      fflush(stdin);
  }

  if(maior == 0)
  {
    maior = altura;

  }else if(altura > maior)
  {
      maior = altura;
      sex = sexo;
  }

  if(sexo == 'F')
  {
      m++;// quantidade contador
      soma+=altura; // acumulador  somat�ria

  }else {

       k++; // contador
    }

  }
  media = soma/m;

  printf("\n A maior altura encontrada %.2f pertence ao sexo %c",maior,sex);
  printf("\n A media da altura das mulheres %.2f",media);
  printf("\n A quantidade de homens enocntrada.. %d",k);

}
