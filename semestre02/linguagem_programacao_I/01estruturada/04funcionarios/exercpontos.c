#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,ponto,i,j,maior;

    float media,somap;

    maior =0;
    somap=0;

    printf("\n Informe a quantidade de funcion�rios");
    scanf("%d",&n);

// looping de controle de funcion�rios
    for(i=1; i<=n; i++)
    {

// looping de controle de pontua��o
        for(j=1; j<=3; j++)
        {
            printf("\n Informe a pontua��o do funcionario %d da pontua��o %d",i,j);
            scanf("%d",&ponto);

            somap+=ponto;
            if(ponto > maior)
            {
                maior =ponto;
            }

        }
        media = (somap/3);
        printf("\n Pontua��o Geral do Funcionario %d obteve a pontua��o total de %.2f",i,somap);
        printf("\n A media do funcion�rio %d foi de %.2f",i,media);
        somap=0;
    }

    printf("\n A Maior Pontua��o obtida dos funcin�rios foi %d",maior);


}
