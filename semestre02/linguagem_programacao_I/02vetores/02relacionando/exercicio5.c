#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char mnome[20];
char nnome[20];
char nome[10][20];
int idade[10], maior, menor,soma,impar;
impar=0;
soma=0;
maior =0;
menor = 90;
int i,op;
Insert()
{
    for(i=1; i<=5; i++)
    {
        printf("\n Informe o nome da Pessoa %d",i);
        fgets(nome[i],20,stdin);
        fflush(stdin);

        printf("\n Informe a Idade da Pessoa");
        scanf("%d",&idade[i]);
        fflush(stdin);
    }

}

Processa()
{
    for(i=1; i<=5; i++)
    {

        if (idade[i] %2 ==0)
        {
            soma+=idade[i];
        }
        else
        {
            impar++;
        }

        if( idade[i] > maior)
        {
            maior=idade[i];
            strcpy(mnome,nome[i]);
        }
        if (idade[i]< menor)
        {
            menor=idade[i];
            strcpy(nnome,nome[i]);
        }

    }

    printf("\n O maior idade encontrada � %s possui a idade %d",mnome,maior);
    printf("\n A menor idade encontrada � %s possui a idade %d",nnome,menor);
    printf("\n A somatoria das Pares � de %d", soma);
    printf("\n A quantidade de idades impares %d", impar);
    printf("\n\n");
    system("pause");

}

main()
{

    do
    {
        
        system("cls");
        printf("\n [1] - Carregando os dados do Vetor");
        printf("\n [2] - Processar e Exibir os Resultados");
        printf("\n [3] - Pesquisando o nome no Vetor");
        printf("\n [4] - Exibindo os Dados - Relat�rio");
        printf("\n Informe a op��o Desejada");
        scanf("%d",&op);
        fflush(stdin);

        switch(op)
        {
        case 1:
            Insert();
            break;
        case 2:
            Processa();
            break;
        case 3:
            printf("\n Rotina em Constru��o.. Aguarde");
            break;
        case 4:
            printf("\n Rotina em Constru��o.. Aguarde");
            break;
        default :
            printf("\n OP��o Invalida.. tente novamente");
            system("pause");
        }
    }
    while(op !=5);
}




