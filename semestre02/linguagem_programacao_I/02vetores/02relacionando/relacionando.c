#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[10];
    int idade[10];
    int i, maior = 0, impar = 0, pares = 0, j;
    char nomeMaior[10];

    for(int i = 0; i <= 4; i++){
        printf("nome: ");
        //scanf("%s", &nome);
        fgets(nome, 10, stdin);

        printf("idade: ");
        scanf("%d",&idade[i]);

        if(i == 1){
            maior = idade[i];
        }
        else if(idade[i] > maior){
            maior = idade[i];
            strcpy(nomeMaior, nome);
        }
        if (idade[i] % 2 != 0){
            impar +=1;
        }
        else if(idade[i] % 2 == 0){
            pares = pares + idade[i];
        }

    setbuf(stdin, NULL);

    }

    printf("Maior idade foi de: %s com %d anos \n", nomeMaior, maior);
    printf("Quantidade de pessoas com idade impar: %d\n", impar);
    printf("A soma das idades pares eh : %d\n", pares);
    //printf("%s", nome);

    system("pause");
    return 0;
}
/*
Exercicios

Dado um conjunto de nomes de pessoas e um conjunto de idades relacionados aos nomes destas pessoas, exibir os seguintes resultados como :

- Nome da Pessoa de maior idade;

- Quantidade Pessoas com idade impar

- Somatória das idades de pessoas com idade par.

- Nome da Pessoa com a menor idade.  */
