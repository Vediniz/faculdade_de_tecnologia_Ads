#include <stdlib.h>
#include <stdio.h>


main()
{
    int soma_coluna[3];
    int soma_linha[3];
    int valor[3][3];
    int i,j,c;

    // Entrada de Dados Via Matriz
    for(i=0; i<3; i++)
    {
        printf("\n Saltando de linha %d",i);
        for(j=0; j<3; j++)
        {
            printf("\n Entre com os valores linha %d",j);
            scanf("%d", &valor[i][j]);
        }
    }


    // processamento Soma de Linha

     for(i=0; i<3; i++)
    {
        soma_linha[i]=0;
        for(j=0; j<3; j++)
        {
           soma_linha[i]=soma_linha[i]+valor[i][j];

       }
    }

    // Processamento soma de Coluna
      for(j=0; j<3; j++)
    {
        soma_coluna[j]=0;
        for(i=0; i<3; i++)
        {
           soma_coluna[j]=soma_coluna[j]+valor[i][j];

       }
    }

    // Saida de dados
    for(i=0; i<3; i++)
    {
            printf("\n Soma da Linha %d => %d",i,soma_linha[i]);
        }


        for(i=0; i<3; i++)
    {
            printf("\n Soma da Coluna %d => %d",i,soma_coluna[i]);
        }
    }

