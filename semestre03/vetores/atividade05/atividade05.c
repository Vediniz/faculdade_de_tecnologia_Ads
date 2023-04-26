/*
►Atividade 5
►Faça um programa em C que leia uma matriz de 5 linhas com 3 colunas para armazenar a pontuação de 5 atleta em 3 aparelhos. 
As notas são um número inteiro de 0 a 10, geradas aleatoriamente.
►O programa deve:
►Listar  para  cada  aparelho  qual  foi  o  atleta  com  a maior nota. 
►Listar para cada atleta qual foi a sua menor nota nos 3 aparelhos.
*/

#include <stdio.h> 
#include <stdlib.h> 

int main(){
  int matriz[5][3];
  int maiorx[3];
  int maior;
  int menor[5];
  int cont;
  int atleta_maior[3];
  int aparelho[5];

  for(int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            matriz[i][j] = (rand() % 11);
        }
    }
    for(int i = 0; i < 5; i++){
        printf("\nAtleta [%d]: ", i+1);
        for (int j = 0; j < 3; j++){
            printf(" %d ", matriz[i][j]);       
        }
    }
    cont = 0;
    for(int i = 0;i < 3; i++){
        for(int j = 0; j < 5; j++){
             if(j == 0){
                maior = matriz[j][i];
                maiorx[cont] = maior;
                atleta_maior[cont] = j+1;

            
               }
             if(maior < matriz[j][i]){
                 maior = matriz[j][i];
                 maiorx[cont] = maior;
                 atleta_maior[cont] = j+1;
             }
        }
        cont++;
    }
   cont = 0;
    for(int i = 0;i < 5; i++){
        for(int j = 0; j < 3; j++){
             if(j == 0){
                menor[cont] = matriz[i][j];
                aparelho[i] = j + 1;

              }
             if(menor[cont] > matriz[i][j]){
                menor[cont] = matriz[i][j];
               aparelho[i] = j + 1;
              }
        }
        cont++;
    }
  for(int i = 0; i < 3; i++){
    printf("\n-------------\n");
    printf("\nMaior nota apararelho %d: [%d]", i+1, maiorx[i]);
    printf("\nAtleta: %d ", atleta_maior[i]);

  }
  printf("\n\n------------- \nMenor nota");
  for(int i = 0; i < 5; i++){
    printf("\n-------------\n");
    printf("\nAtleta [%d] \nNota: %d, aparelho: %d ", i+1, menor[i], aparelho[i]);

  }


    printf("\nPressione qualquer tecla para continuar...");
    getchar();
    return 0;
}
