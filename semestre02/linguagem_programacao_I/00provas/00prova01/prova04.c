#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[10][10];
    char produtosMaiorCinq[10][10];
    float preco[10];
    int menoresdeCinq = 0, precoCem = 0, n = 0;
    float precoMedia = 0;


    for(int i=0; i< 5; i++) {
        setbuf(stdin, NULL);
        printf("Digite o nome do produto: ");
        fgets(nome[i], 10, stdin);
        printf("Digite o preco: ");
        scanf("%f", &preco[i]);

        if(preco[i] < 50){
            menoresdeCinq += 1;
        }
        else if(preco[i] > 100){
            precoMedia = precoMedia + preco[i];
            precoCem ++;
        }

        if(preco[i] >= 50 && preco[i] <= 100){
            strcpy(produtosMaiorCinq[i], nome[i]);
            setbuf(stdin, NULL);
            n++;
        }

    }
    precoMedia = precoMedia / precoCem;
    
    printf("\nA quantidade de produtos com preco menor de R$50: %d", menoresdeCinq);
    printf("\nProdutos entre R$50 e R$100:\n");
    for(int i = 0; i <= n ; i++){
        printf("%s", produtosMaiorCinq[i]);
    }
    printf("\nA media de precos acima de R&100: %.2f\n", precoMedia);

    system("pause");
    return 0;
}