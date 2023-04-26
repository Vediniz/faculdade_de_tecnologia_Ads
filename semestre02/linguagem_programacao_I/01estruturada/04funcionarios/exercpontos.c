#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,ponto,i,j,maior;

    float media,somap;

    maior =0;
    somap=0;

    printf("\n Informe a quantidade de funcionários");
    scanf("%d",&n);

// looping de controle de funcionários
    for(i=1; i<=n; i++)
    {

// looping de controle de pontuação
        for(j=1; j<=3; j++)
        {
            printf("\n Informe a pontuação do funcionario %d da pontuação %d",i,j);
            scanf("%d",&ponto);

            somap+=ponto;
            if(ponto > maior)
            {
                maior =ponto;
            }

        }
        media = (somap/3);
        printf("\n Pontuação Geral do Funcionario %d obteve a pontuação total de %.2f",i,somap);
        printf("\n A media do funcionário %d foi de %.2f",i,media);
        somap=0;
    }

    printf("\n A Maior Pontuação obtida dos funcinários foi %d",maior);


}
