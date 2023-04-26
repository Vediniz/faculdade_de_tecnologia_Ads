#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade = 0, opiniao = 0, otimo = 0, bom = 0, regular = 0, n = 0, i; 
    float mediaOtimo, percent = 0, idadeMedia = 0;

    printf("Digite a Quantidade de participantes: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        printf("Idade da %da pessoa: ", i);
        scanf("%d", &idade);
        printf("O que achou do filme: \n [1] Otimo \n [2] Bom \n [3] Regular \n Opiniao: ");
        scanf("%d", &opiniao);

        if(opiniao == 1 ){
            otimo++;
            idadeMedia += idade;
        }
        else if(opiniao == 2){
            bom++;
        }
        else if(opiniao == 3){
            regular++;
        }
        else{
            while (opiniao != 1 && opiniao != 2 && opiniao != 3){
                printf("Invalido ... Tente novamente....");
                scanf("%d", &opiniao);
            }
        }
    }
    idadeMedia =  idadeMedia / otimo;
    percent = (bom*100)/ n;
    printf("\nA media de pessoa que disseram otimo: %.2f", idadeMedia);
    printf("\nA quantidade de pessoas que votou em regular: %d ", regular);
    printf("\nA porcentagem de pessoas que disse bom: %.2f\n", percent);
    system("pause");
    return(0);
}