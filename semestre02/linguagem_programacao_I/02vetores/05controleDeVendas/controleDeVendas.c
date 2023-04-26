#include <stdio.h> 
#include <stdlib.h>

int main(){
    char nomeDoFuncionario[10][10];
    int totalDeVendaPorFuncionario [10];
    float percentual[10];

    printf("Nome do Funcionario:\n");
    fgets(nomeDoFuncionario[0], 10, stdin);
    printf("Total de Vendas: \n");
    scanf("%d", &totalDeVendaPorFuncionario[0]);

    printf("\n%s", nomeDoFuncionario);
    printf("%d\n", totalDeVendaPorFuncionario[0]);


    system("pause");
    return 0;
}