#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main (){

    int numero = 0, pecas = 0, maior = 0, quantidade = 0, funcionarios = 0, h = 0, m = 0;
    float salario = 0, salarioNovo = 0, folhaEmpresa = 0, percen = 0, percent = 0, mH = 0, mM = 0, medH = 0, medM = 0;
    int sexo = 0;
    salario = 1.100;

    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &funcionarios);

    for(int i = 1; i <= funcionarios; i++){
        printf("\nDigite o numero do %do operario: ", i);
        scanf("%d", &numero);
        printf("\nDigite a quantidade de pecas fabricadas: ");
        scanf("%d", &quantidade);
        printf("\nDigite o sexo [F = 1 /M = 2]: ");
        scanf("%d", &sexo);
        fflush(stdin);
        sexo = toupper(sexo);

        while(sexo != 1 && sexo != 2){

            printf("\nValor invalido, informe F ou M:");
            scanf("%d",&sexo);
            sexo = toupper(sexo);
            fflush(stdin);
        }

        if(sexo == 2){
            mH += quantidade;
            h++;
        }
        else if(sexo == 1) {
            mM += quantidade;
            m++;
        }
        
        pecas += quantidade;

        if (quantidade <= 30){
            salarioNovo = salario;
        }
        else{
            quantidade = quantidade - 30;
            if (quantidade <= 5){
                //1 == 1100 * 0.03
                for (int j = 1; j <= quantidade; j++) {
                    percent = salario * 0.03;
                    percen = percen + percent;
                }
                //percent = quantidade * 0.03;
                salarioNovo = salario + percen;
            }
            else {
                for (int j = 1; j <= quantidade; j++) {
                    percent = salario * 0.05;
                    percen = percen + percent;
                }
                //percent = quantidade * 0.05;
                salarioNovo = salario + percen;
        }
        }
        printf("[%d] :  %.3f", numero, salarioNovo);
        folhaEmpresa = folhaEmpresa + salarioNovo;

        if ( i == 1){
            maior =  numero;
        }
        else if(salarioNovo > maior){
            maior = numero;
        }
    }
    medH = mH / h;
    medM = mM / m;
    printf("\nO total da folha de pagamento da empresa foi: %.3f", folhaEmpresa);
    printf("\nO numero de pecas fabricadas foi: %d", pecas);
    printf("\nA media de pecas fabricadas por homens: %.f", medH);
    printf("\nA media de pecas fabricadas por mulheres foi: %.f", medM);
    printf("\nO funcionario com maior salario eh: %d \n", numero);


    system("pause");
    return 0;
}

