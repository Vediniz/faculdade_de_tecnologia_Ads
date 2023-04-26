#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    struct funcionarios{
        char nome[3][15];
        float vendas[3][3];
        int pontos[3];
        char maiorPontuacao[15];
        float total[3];
        int maiorPonto;
    };
    struct funcionarios funcionario;

    for(int i = 0; i < 3; i++){
        setbuf(stdin, NULL);
        printf("Digite o  nome do funcionario: "); 
        fgets(funcionario.nome[i], 15, stdin);
        
        for(int j = 0; j < 3; j++){
            printf("Digite a venda do funcionario: "); 
            scanf("%f", &funcionario.vendas[i][j]);
            funcionario.total[i] = funcionario.total[i] + funcionario.vendas[i][j];
            funcionario.pontos[i] = funcionario.total[i] / 100;
            setbuf(stdin, NULL);
            
        }
    }
    int c = 0; 

    while(c < 3){
        if (c == 0){
            strcpy(funcionario.maiorPontuacao, funcionario.nome[c]);
            funcionario.maiorPonto = funcionario.pontos[c];
        }
        else{
            if(funcionario.pontos[c] > funcionario.maiorPonto){
                strcpy(funcionario.maiorPontuacao, funcionario.nome[c]);
                funcionario.maiorPonto = funcionario.pontos[c];
            }
        }
        c = c + 1;
    }

    for(int i = 0; i < 3; i++){ 
        printf("\n========================");
        printf("\n\t %s", funcionario.nome[i]);
        printf("\nPontos: %d", funcionario.pontos[i]);

    }
    
    printf("\n=================================================");
    printf("\n\tMaior Pontuacao: ");
    printf("%s", funcionario.maiorPontuacao);
    printf("\nPontos: %d", funcionario.maiorPonto);
    printf("\n");
    system("pause");
    system("cls");
    return 0;
}