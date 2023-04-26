#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float notaum, notadois, media;
    printf("Insira a primeira nota: ");
    scanf("%f",&notaum);
    printf("Insira a segunda nota: ");
    scanf("%f", &notadois, "\n");
    media = (notaum + notadois)/2;
    printf("A média é: %.1f \n", media);

    if( media >= 6){
        printf("APROVADO!!");
    } else{
        printf("REPROVADO!\n");
    }
    system("pause");
    return 0;
}
