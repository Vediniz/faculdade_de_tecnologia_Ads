/*
►Atividade 4
►Faça  um  programa  em  C  que  leia  uma  matriz  4  x  4  de números inteiros gerados aleatoriamente.
►Exibir na tela a localização (linha e a coluna) do maior e do menor valor.
*/

#include <stdio.h> 
#include <stdlib.h> 

int main(){
    int matriz[4][4];
    int maior[3];
    int menor[3];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            matriz[i][j] = rand() % 10;
        }
    }
    for(int i = 0; i < 4; i++){
        printf("\n");
        for(int j = 0; j < 4; j++){
            //printf("\n");
            printf(" %d " , matriz[i][j]);
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == 0 && j == 0){
                maior[0] = matriz[i][j];
                maior[1] = i + 1; 
                maior[2] = j + 1;

                menor[0] = matriz[i][j];
                menor[1] = i + 1;
                menor[2] = j + 1;
            }
            if(maior[0] < matriz[i][j]){
                maior[0] = matriz[i][j];
                maior[1] = i + 1;
                maior[2] = j + 1;
            
            }
            if(menor[0] > matriz[i][j]){
                menor[0] = matriz[i][j];
                menor[1] = i + 1;
                menor[2] = j + 1;
            }
        }
    }
    printf("\n\nMaior: %d", maior[0]);
    printf("\nPosição: a%d%d", maior[1], maior[2]);

    printf("\n-----------------------");

    printf("\nMenor: %d", menor[0]);
    printf("\nPosição: a%d%d\n", menor[1], menor[2]);
   
    return 0;
}