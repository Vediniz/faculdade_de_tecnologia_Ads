#include <stdio.h> 
#include <stdlib.h>

int main(){
    int funcionarios = 3; 
    int mes = 3; 
    int maior = 0;
    float media = 0; 
    int pontosF, funcionarioMaiorPontos;

    
        for (int j=1; j <= funcionarios; j++){
            int pontos = 0;
            for(int i=1; i <= mes; i++){
            printf("\nDigite a pontuaçao do %d funcionario no mes %d\n", j, i);
            scanf("%d", &pontos);
            if (pontos > maior){
                maior = pontos; 
                funcionarioMaiorPontos = j;
            }
            pontosF = pontos + pontos;
        }
            printf("\nA pontuaçao total da %d pessoa eh: %.2f ", j, pontosF);
            media = media + pontos;
            media = media / funcionarios;
            printf("\nA media da %d pessoa eh: %.2f ", j, media);
    }
    
    printf("\na maior pontuaçao foi %d do funcionario %d ", maior, funcionarioMaiorPontos);
    system("pause");
    return 0; 
}