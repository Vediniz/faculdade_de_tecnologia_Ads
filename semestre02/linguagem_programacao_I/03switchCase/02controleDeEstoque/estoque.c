#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Dados do Estoque

char nome[6][20];
int codigo [6];
float valor[6];
int quant[6];
int i,xcodigo,achou,xquant,k;

//  Dados do Relatorio

char produto[10][20];
char cliente[10][20];
float rtotal[10];
int rquant[10];
k=0;


void cadastro()
{
    for(i=1; i<=5; i++)
    {
        codigo[i]=i;
        printf("\n Informe a Descrição do Produto");
        fgets(nome[i],20,stdin);
        //fflush(stdin);

        printf("\n Informe o Valor do Produto");
        scanf("%f",&valor[i]);
        fflush(stdin);

        printf("\n Informe a Quantidade em Estoque do Produto");
        scanf("%d",&quant[i]);
        fflush(stdin);
    }
}

void exibir()
{
    if(i == 0)
    {
        printf("\n Não foi efetuado atualização Cadastral");
        printf("\n\n");
        system("pause");
    }
    else
    {

        for(i=1; i<=5; i++)
        {

            printf("\n Valor do Produto %.2f Quantidade %d ==> Produto %s",valor[i],quant[i],nome[i]);
            printf("\n\n");
        }
        system("pause");
    }
}

void vendas()
{
    printf("\n Informe o Codigo do Produto");
    scanf("%d",&xcodigo);
    fflush(stdin);
    achou =0;

    while(xcodigo >5)
    {
        printf("\n Codigo invalido.. Redigite o Codigo novamente");
        scanf("%d",&xcodigo);
        fflush(stdin);

    }

    printf("\n Informe a quantidade desejada");
    scanf("%d",&xquant);
    fflush(stdin);
    i=1;

    while (i<=5)
    {
        if(xcodigo == codigo[i] && xquant <= quant[i])
        {
            printf("\n ----------------------------------");
            printf("\n Produto em Estoque %s",nome[i]);
            printf("\n Quantidade Disponivel %d", quant[i]);
            printf("\n ----------------------------------");
            quant[i]=quant[i]-xquant;
            printf("\n Estoque Atualizado com Sucesso");
            achou =1;
            k++;
            printf("\n Informe os dados para Nota Fiscal");
            printf("\n Informe o nome do Cliente");
            fgets(cliente[k],20,stdin);
            strcpy(produto[k], nome[i]);
            rquant[k]= xquant;
            rtotal[k] = xquant*valor[i];
            system("pause");
            break;
        }
        else
        {
            i++;
        }
    }
    if(achou == 0)
    {
        printf("\n Produto em Falta ou Não consta em Estoque");
        printf("\n\n");
        system("pause");
    }
}

void relvendas()
{
  if (i==0)
  {
      printf("\n Não houve transação Comercial");
      system("pause");
  }else{
    for(i=1; i<=k; i++)
    {
        printf("\n**** Relatório de Vendas ***");
        printf("\n ---------------------------");
        printf("\n Cliente.... :%s",cliente[i]);
        printf("\n Produto.....:%s",produto[i]);
        printf("\n Quantidade..:%d",rquant[i]);
        printf("\n Total.......:%.2f",rtotal[i]);
        printf("\n----------------------------");
        printf("\n\n");
    }
          system("pause");
    }
}


void main()
{
    int op;

    do
    {
        system("cls");
        printf("\n ---------------------------------------");
        printf("\n [1] - Cadastro de Produto..............");
        printf("\n [2] - Vendas   de Produto..............");
        printf("\n [3] - Relatório dos Produtos em Estoque");
        printf("\n [4] - Relatório de Vendas .............");
        printf("\n ---------------------------------------");

        printf("\n Informe a Opção");
        scanf("%d",&op);
        fflush(stdin);

        switch (op)
        {
        case 1:
            cadastro();
            break;
        case 2:
            vendas();
            break;
        case 3:
            exibir();
            break;

        case 4:
            relvendas();
            break;
        default :
            printf("\n OPção Invalida.. tente novamente");
            system("pause");
        }
    }
    while(op !=5);
}








