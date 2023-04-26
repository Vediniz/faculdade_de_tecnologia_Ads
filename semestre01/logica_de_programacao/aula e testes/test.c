#include <stdio.h>
#include <stdlib.h>

int main(){

    float notaum, notadois, media;
    int frequencia;
    printf("Insira a primeira nota: ");
    scanf("%f",&notaum);
    printf("Insira a segunda nota: ");
    scanf("%f", &notadois, "\n");
    printf("Insira a frequencia:");
    scanf("%d",&frequencia, "\n");
    media = (notaum + notadois)/2;
    printf("A media eh: %.1f \n", media);

    if(media>=6 && frequencia>75){
        printf("APROVADO!!\n");
    } else{
        if (frequencia <75) {
           printf("Reprovado por falta! \n");
        }

     if (media>=3 && frequencia>=75){
        printf("Pode fazer substitutiva!!\n");
    }else {
        printf("REPROVADO!\n");
    }
    system("pause");
    return 0;
}
}
