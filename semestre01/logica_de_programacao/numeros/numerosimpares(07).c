#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, numeros_pares;
    numeros_pares = 0;

    printf("Informe um numero inteiro de 0 a 10: ");
    scanf("%d",&numero);

    while(numero <=10){
        if(numero % 2 != 0){
            printf("%d", numero);
            printf("\n");
        }else{
            numeros_pares = numeros_pares +1;
        }
        numero = numero + 1;
    }
    printf("a quantidade de numeros pares entre o numero digitado e 10 eh:  %d", numeros_pares);
    printf("\n");

    system("pause");
    return 0; 
}
/*Exibir os números ímpares a partir de um número inteiro informado até 10. No final exibir quantos pares foram encontrados no intervalo.*/