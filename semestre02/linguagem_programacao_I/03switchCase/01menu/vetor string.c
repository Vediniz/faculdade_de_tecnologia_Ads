#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Variaveis Globais
char nome[10][20];
char mnome[20];
char nnome[20];
int idade [10];
int i,maior,k,menor,soma;

// função sem retorno
void Entrada_Dados()
{
    for(i=1; i<=5;i++)
    {
        printf("\n Digite o nome %d",i);
        fgets(nome[i],20,stdin);
        fflush(stdin);

        printf("\n Informe a idade");
        scanf("%d",&idade[i]);
        fflush(stdin);
    }
}

void Pesquisa()
{
    char pesq[20];
    int achou;
    printf("\n Informe o nome da pessoa a ser pesquisada");

    fgets(pesq,20,stdin);
    achou =0;

    for(i=1;i<=5;i++)
    {
        if(strcmp(pesq,nome[i])==0)
        {
         printf("\n Nome encontrado na Posição %d de Nome %s",i,nome[i]);
         system("pause");
         achou =1;
         break;
        }
    }

    if(achou ==0)
    {
        printf("\n Nome não foi encontrado.. tente novamente");
        system("pause");
    }

}



// função sem retorno
void Processa()
{
  if(i==0)
  {
      printf("\n Vetor vazio.. favor inserir dados");
      system("pause");
  }else{

    k=0;
    soma=0;
    maior =0;
    menor =100;
    for(i=1;i<=5;i++)
    {

    if(idade[i]> maior)
    {
        maior=idade[i];
        strcpy(mnome,nome[i]);
    }

    if(idade[i] < menor)
    {
        menor=idade[i];
        strcpy(nnome,nome[i]);
    }
    if(idade[i]%2 != 0)
    {
        k++;
    }
    else
    {
        soma=soma+idade[i];
    }
    }
  }
}
// função sem retorno
void Exibir_proc()
{
    printf("\n Nome da Pessoa de maior Idade %s %d",mnome,maior);
    printf("\n Nome da Pessoa de menor Idade %s %d",nnome,menor);
    printf("\n Quantidade de pessoas com idade impar %d",k);
    printf("\n A soma da pessoas com idade Par %d",soma);
    system("pause");
}

void Exibir_dados()
{
    printf("\n ---------------------------------------------------");
    for(i=1;i<=5;i++)
    {
        printf("\n A Pessoa possui idade de %d Nome %s",idade[i],nome[i]);

    }
    printf("\n ---------------------------------------------------");
    printf("\n\n");
    system("pause");
}



// programa principal
int main()
{
    int op;

    do
    {
        system("cls");
        printf("\n-----------------------------------");
        printf("\n [1] - Entrada de Dados............");
        printf("\n [2] - Processamento dos Dados.....");
        printf("\n [3] - Saida de Resultados.........");
        printf("\n [4] - Pesquisa de Nomes...........");
        printf("\n [5] - Exibir os Nomes e Idades....");
        printf("\n-----------------------------------");

        printf("\n Informe a OPção Desejada");
        scanf("%d",&op);
        fflush(stdin);

        switch (op)
        {
        case 1:
            Entrada_Dados();
            break;
        case 2:
            Processa();
            break;
        case 3:
            Exibir_proc();
            break;
        case 4:
           Pesquisa();
            break;
        case 5:
            Exibir_dados();
            break;
        default :
            printf("\n Opção Invalida... tente novamente");
            system("pause");
        }
    }
    while(op!=6);
}





