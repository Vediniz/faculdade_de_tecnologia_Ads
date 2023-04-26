#include <stdio.h>
#include <stdlib.h>


int main()
{

    float desconto,inss,irrf,salbruto,salliq;
    float salhoras, horastrab;
    int n,i;

    printf("Informe a quantidade de Funcionarios...");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {

        printf("\n Informe a Horas Trabalhadas..");
        scanf("%f",&horastrab);

        printf("\n Informe Salarios Horas....");
        scanf("%f",&salhoras);
        salbruto = salhoras *horastrab;


        // Encontrando o valor do INSS


        if (salbruto <= 1100)
        {
            inss = salbruto *0.075;
        }
        else if (salbruto <= 2203.48)
        {
            inss = salbruto * 0.09;
        }
        else if (salbruto <= 3305.22)
        {
            inss =salbruto * 0.12;
        }
        else if(salbruto <=6433.57)
        {
            inss = salbruto * 0.14;
        }
        else
        {
            inss = 900.69;
        }

        printf("\n O Valor do Salario Bruto...%.2f", salbruto);
        salbruto = salbruto - inss;

        // Encontrando aliquota do IRRF

        if(salbruto <=1903.98)
        {
            irrf = 0;
        }else if(salbruto <= 2826.65)
        {
            irrf =salbruto *0.075;
        }else if (salbruto <= 3751.05)
        {
            irrf =salbruto *0.15;
        }else if(salbruto <= 4664.98)
        {
            irrf = salbruto *0.225;
        }else {
         irrf = salbruto * 0.275;

        }

        desconto = inss+irrf;
        salliq = salbruto - irrf;

        printf("\n O valor Liquido...%.2f",salliq);
        printf("\n O valor do INSS...%.2f",inss);
        printf("\n O valor do IRRF...%.2f",irrf);
        printf("\n Total de Descontos..%.2f",desconto);
            }
    return 0;
}
