#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    float vprod,sal,maior,tsal;
    float mh,mf;
    int i,n,pecas,prontuario,m,f,th,tf,pront,tpecas;

    mf=0;
    mh=0;
    m=0;
    f=0;
    th=0;
    tf=0;
    tpecas=0;
    tsal=0;
    maior=0;

    printf("\n Informe a quantidade de funcionários");
    scanf("%d",&n);
    fflush(stdin);

    for(i=1; i<=n; i++)
    {

        printf("\n Informe o sexo do Funcionário");
        scanf("%c",&sexo);
        fflush(stdin);

        printf("\n Informe o seu prontuário");
        scanf("%d",&prontuario);
        fflush(stdin);

        printf("\n Informe a quantidade de peças Fabricadas");
        scanf("%d",&pecas);
        fflush(stdin);

        sal =1200;
        vprod=0;

        if(pecas <= 30)
        {
            sal =1200;

        }
        else if(pecas > 30 && pecas <= 35)
        {
            vprod=(pecas - 30)*36;

        }
        else if (pecas > 35)
        {
            vprod = (pecas - 35)* 60;

        }


        if(sexo == 'm' || sexo == 'M')
        {
            m++;
            th+=pecas;

        }
        else
        {

            f++;
            tf=tf+pecas;

        }


        sal = sal + vprod;
        tpecas =tpecas +pecas;
        tsal=tsal +sal;


        if(sal > maior )
        {

            maior = sal;
            pront = prontuario;
        }

        printf("\n O funcionário de prontuario %d obteve salario %.2f", prontuario,sal);
        printf("\n\n");
        system("pause");
    }

    mh = th/m;
    mf = tf/f;

    printf("\n A media de peças produzidas pelas mulheres %.2f", mf);
    printf("\n A media de peças produzidas pelos homens %.2f", mh);
    printf("\n Total de Peças Fabricadas pelos homens %d",tpecas);
    printf("\n Total de Pagto a ser efetuado  %.2f",tsal);
    printf("\n O maior salario encontrado %.2f pertence ao prontuário %d", maior,pront);


}
