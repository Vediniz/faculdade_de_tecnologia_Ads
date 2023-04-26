#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variaveis
    int num1, num2, num3;

    //Entrada de dados
    printf("Primeiro valor: ");
    scanf("%d", &num1);
    printf("Segundo valor: ");
    scanf("%d", &num2);
    printf("Terceiro valor: ");
    scanf("%d", &num3);

    //Saída de dados
    printf("\n\nOrdem Crescente: ");
    if(num1<num2 && num2<num3){
        printf("%d %d %d", num1, num2, num3);
    } else if(num1<num3 && num3<num2){
        printf("%d %d %d", num1, num3, num2);
    } else if(num2<num1 && num1<num3){
        printf("%d %d %d", num2, num1, num3);
    } else if(num2<num3 && num3<num1){
        printf("%d %d %d", num2, num3, num1);
    } else if(num3<num1 && num1<num2){
        printf("%d %d %d", num3, num1, num2);
    } else{
        printf("%d %d %d", num3, num2, num1);
    }
}