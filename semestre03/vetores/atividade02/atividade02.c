/*
►Atividade 2
►Faça um programa em C com dois vetores com 5 números inteiros cada, gerados aleatoriamente.
►Na  sequência,  ordenar  os  vetores  na  ordem  crescente. Para a ordenação utilize o método bolha. 
►Criar  um  terceiro  vetor  com  10  posições  em  ordem crescente, resultante da intercalação dos dois vetores.
►Exibir os elementos do terceiro vetor na tela.
*/

#include <stdio.h> 
#include <stdlib.h>

void metodo_bolha(int n, int vetor[n]){
    int temp = 0; 

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            if (j + 1 >= n){
                break;
            }
            else {
                if(vetor[j] > vetor[j+ 1]){
                //temp = 0;
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;

                }
               
            } 
        }
        
    }
    for(int i = 0; i < n; i++){
        printf(" [%d]", vetor[i]); 
    }
    
}

int main(){
    int random_um[5]; 
    int random_dois[5];
    int ordenado[10]; 

    for(int i = 0; i < 5; i++){
        random_um[i] = rand() % 10;
        random_dois[i] = rand() % 10; 
    }
    printf("Vetor um: ");
    for(int i = 0; i < 5; i++){
        printf(" [%d]",random_um[i]);
    }
    printf("\nVetor dois: ");

      for(int i = 0; i < 5; i++){
        printf(" [%d]",random_dois[i]);
    }
    printf("\n---------------------------");
    printf("\nVetor Um ordenado: ");
    metodo_bolha(5, random_um);
    printf("\nVetor Dois ordenado: ");
    metodo_bolha(5, random_dois);
    

    int cont;
    for(int i = 0; i <10; i++){
        if(i < 5){
            ordenado[i] = random_um[i];

        }
        else{
            ordenado[i] = random_dois[cont];
            cont++;
        }
    }
    printf("\nVetor 3 ordenado: ");
    metodo_bolha(10, ordenado);

    return 0;
}
