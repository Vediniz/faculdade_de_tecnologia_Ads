#include <stdio.h>
#include <stdlib.h>

int main(){
    float horas, descontos, inss, salarioHora, salarioBruto, salarioLiquido, irrf = 0;
    int pessoas = 0; 
    

    printf("Digite a quantidade de funcionarios: ");
    scanf("%inss",&pessoas);

    for(int i = 0; i < pessoas; i++) {
        printf("Digite as horas trabalhadas da %da pessoa: ", i+1);
        scanf("%f",&horas);
        printf("Digite o salario por hora da %da pessoa: ", i+1);
        scanf("%f", &salarioHora);
        salarioBruto = salarioHora * horas;

        if(salarioBruto <= 1100){
            descontos = salarioBruto*0.075; 
            irrf = 0;
        }
        else if(salarioBruto <= 2203){
            inss = salarioBruto*0.09;
            if(salarioBruto > 1903){
                irrf = (salarioBruto - inss)*0.075;
                irrf = irrf - 143;
            }
            else{
                irrf =0; 
            }
            descontos = irrf + inss;
        }
        else if(salarioBruto <= 3305){
            inss = salarioBruto * 0.12;
            if(salarioBruto >2826){
                irrf = (salarioBruto - inss)*0.15;
                irrf = irrf - 355;
            }
            else{
                irrf = (salarioBruto - inss)*0.075;
                irrf = irrf - 636;
            }
            descontos = inss + irrf;
        }
        else if(salarioBruto <= 6433){
            inss = salarioBruto*0.14;
            if (salarioBruto > 4664){
                irrf = (salarioBruto - inss)*0.275;
                irrf = irrf - 869;
            }
            else{
                irrf = (salarioBruto - inss)*0.15;
            }
            descontos = irrf + inss; 
        }
        else{
            descontos = 0;
        }

        salarioLiquido = salarioBruto - descontos;
        printf("\n--------------------------------\n");
        printf("\nSalario Bruto da %da pessoa: %.2f \nSalario Liquido da %da pessoa: %.2f \nImposto de Renda da %da pessoa: %.2f \nINSS da %da pessoa: %.2f \n", i+1, salarioBruto, i+1, salarioLiquido, i+1, irrf, i+1, inss);
        printf("\n--------------------------------\n");
        system("pause");
    }

system("pause");
return 0;
}
