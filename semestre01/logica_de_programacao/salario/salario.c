#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Incluir as seguintes condições no exercício 04 SALÁRIOS.

Considerando o SALÁRIO ATUALIZADO, calcular o INSS e IMPOSTO DE RENDA (tabela abaixo) para serem descontados do SALÁRIO.
Calcular também FGTS. Calcular em seguida o salário-família a partir da quantidade de dependentes do funcionário.
Considerar R$ 50,00 o valor para cada dependente.
Exibir:
(-) INSS (10% SALÁRIO ATUALIZADO)
(-) IMPOSTO DE RENDA (TABELA ABAIXO)
TOTAL DE DESCONTOS ( INSS + IMPOSTO DE RENDA )
QUANTIDADE DEPENDENTES: (informado pelo usuário)
SALÁRIO-FAMÍLIA (dependentes x 50,00)
SALÁRIO LÍQUIDO ( SALÁRIO ATUALIZADO - TOTAL DE DESCONTOS + SALÁRIO-FAMÍLIA )
FGTS A RECOLHER (5% SALÁRIO ATUALIZADO)



OBSERVAÇÃO:
EXERCÍCIO DE CARATER EDUCACIONAL QUE NÃO CORRESPONDE À REALIDADE OFICIAL DOS CÁLCULOS.



TABELA PROGRESSIVA DO IMPOSTO DE RENDA NA FONTE
(1) salário até 1.000 - isento
(2) salário até 2.000 - 10%
(2) salário até 3.000 - 15%
(4) salário acima de 3.000 - 20%



EXEMPLO:
salário atualizado: 10000
(-) INSS: 1000
(-) IMPOSTO DE RENDA: 2000
TOTAL DE DESCONTOS: 3000
QUANTIDADE DE DEPENDENTES: 2
(+)DEPENDENTES: 100
SALÁRIO LÍQUIDO: 7100
FGTS A RECOLHER: 500*/

int main (){

    setlocale(LC_ALL, "Portuguese");
    float salario, porcentagem, salariofinal, inss, imprenda, fgts, descontos, salarioliq;
    int depnd;

    printf("Insira o salario: ");
    scanf("%f",&salario);
    printf("insira o número de dependetes: \n");
    scanf("%d",&depnd);

    if(salario<1000){
       porcentagem = (salario*0.20);
    }else{
        if(salario <= 5000){
            porcentagem = (salario*0.15);
        }

        if(salario <=10000){
            porcentagem = (salario*0.10);
        }
        if (salario>10000){
            porcentagem = (salario*0.05);
        }
}
    salariofinal = salario + porcentagem;

    printf(" O salario informado foi:R$ %.2f",salario,"\n");
    printf("\n O reajuste foi de:R$ %.2f",porcentagem,"\n");
    printf("\n Novo salario:R$ %.2f ", salariofinal,"\n");

    if (porcentagem > 500){
            printf("\n MAIS QUE R$500!!");
        }

    if (salariofinal <=1000){
        imprenda = 0;

    }else{
        if (salariofinal>1000 && salariofinal <= 2000){
        imprenda = (salariofinal*0.10);
        }
        if(salariofinal<=3000){
            imprenda = (salariofinal*0.15);
        }
        if (salariofinal>3000){
            imprenda = (salariofinal*0.20);
        }
    }
        inss = (salario*0.10);
        descontos = (inss + imprenda);
        salarioliq = (salariofinal - descontos + depnd*50);
        fgts = (salarioliq*0.05);

        printf("\n INSS: R$%.2f", inss);
        printf("\n IMPOSTO DE RENDA: R$%.2f",imprenda);
        printf("\n TOTAL DE DESCONTOS: R$%.2f",descontos,"\n");
        printf("\n A QUANTIDADE DE DEPENDETES É: %d",depnd);
        printf("\n Dependentes:R$ %d", depnd*50);
        printf("\n O SALÁRIO LIQUIDO É:R$ %.2f",salarioliq);
        printf("\n O FGTS A RECOLHER:R$ %.2f \n ", fgts);

    system("pause");
    return 0;

}
