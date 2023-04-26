#include <stdio.h>
#include <stdlib.h>

int main(){
    char resposta;
    int numero[10];
    int i = 0;
    int soma = 0;
    int maior = 0, menor = 0, impar = 0, par = 0;
    float media = 0, mediaPar = 0, percentImpar = 0;

    while(1){
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);
        setbuf(stdin, NULL);
        soma += numero[i];
        if( i == 0){
            maior = numero[i];
            menor = numero[i];
        }
        else if(numero[i] > maior){
            maior = numero[i];
        }
        else if(numero[i] < menor){
            menor = numero[i];
        }

        if(numero[i] % 2 == 0){
            mediaPar += numero[i];
            par++;
        }
        else{
            impar++;
        }
        printf("\n Digite [Parar] // [P] para parar!!");
        scanf("%c",&resposta);
        setbuf(stdin, NULL);
        resposta = tolower(resposta);
        i++;
        if(resposta == 'p'){
            break;
        }
    }
    media = soma/i;
    percentImpar = (impar*100)/i;

    for(int c = 0; c < 10; c++) {
        printf("%d\n", numero[c]);
    }
    printf("------------------------------------");
    printf("\n Soma: %d", soma);
    printf("\n A quantidade de numero digitados: %d", i);
    printf("\n A media de numeros digitados: %.1f", media);
    printf("\n O maior valor: %d", maior);
    printf("\n O menor valor: %d", menor);
    mediaPar = mediaPar / par;
    printf("\n A media dos numeros Pares: %.1f", mediaPar);
    printf("\n A porcentagem de numeros Impares digitados: %.1f", percentImpar);

    
}