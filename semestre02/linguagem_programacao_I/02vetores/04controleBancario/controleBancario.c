#include <stdio.h>
#include <stdlib.h>

int main(){
    char nomeDoFuncionario[10][5];
    float salarioDoFuncionario[5];
    int quantidadeDeAnos[5];
    float salarioDoFuncionarioNovo[5];


    for(int i = 0; i < 5; i++){
        setbuf(stdin, NULL);
        printf("\nDigite o nome do %d funcionario:\n ", i+1);
        fgets(nomeDoFuncionario[i], 5, stdin);
        printf("Salario do %d funcionario:\n ", i+1);
        scanf("%f", &salarioDoFuncionario[i]);
        printf("\nAnos de servico na empresa: ");
        scanf("%d", &quantidadeDeAnos[i]);

        if(salarioDoFuncionario[i] < 2000 && quantidadeDeAnos[i] > 5){
            salarioDoFuncionarioNovo[i] = (salarioDoFuncionario[i]*0.35) + salarioDoFuncionario[i];
        }
        else if(quantidadeDeAnos[i] > 5){
            salarioDoFuncionarioNovo[i] = (salarioDoFuncionario[i]*0.25) + salarioDoFuncionario[i];
        }
        else if(salarioDoFuncionario[i] < 2000){
            salarioDoFuncionarioNovo[i] = (salarioDoFuncionario[i]*0.15) + salarioDoFuncionario[i];
        }
        else{
            salarioDoFuncionarioNovo[i] = salarioDoFuncionario[i];
        }
        
        /*printf("Funcionario:%s", nomeDoFuncionario[i]);
        printf("\nSalario Antigo: %.2f", salarioDoFuncionario[i]);
        printf("\nSalario Atualizado%.2f", salarioDoFuncionarioNovo[i]);
        printf("\nAnos servindo a empresa: %d", quantidadeDeAnos[i]);*/
    }
    for(int i = 0; i < 5; i++){
        printf("\n------------------------------------");
        printf("\nFuncionario:%s", nomeDoFuncionario[i]);
        printf("\nSalario Antigo: %.2f", salarioDoFuncionario[i]);
        printf("\nSalario Atualizado: %.2f", salarioDoFuncionarioNovo[i]);
        printf("\n------------------------------------");

    }

    system("pause");
    return 0;
    
}