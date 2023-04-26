#include <stdio.h>
#include <stdlib.h>

int main(){
    int homens = 0, maiorPessoa = 0, i = 0, n = 0;
    float altura = 0, media = 0, maior = 0;
    int pessoas = 0;

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &n);
    
    for (i; i < n; i++){

        printf("[1 - M]\n[2 - F] ");
        scanf("%d", &pessoas);
        printf("\nDigite a altura: ");
        scanf("%f", &altura);

        if (pessoas == 1 ){
            homens = homens + 1;
        }
        else if (pessoas == 2 ){
            media = media + altura;
        }
        else{
            printf("\n Valor invalido");
        }

        if (i == 1){
            maior = altura;
        }
        else if (altura > maior){
            maior = altura;
            maiorPessoa = i + 1;
        }
    }
    media = media / (i - homens);
    printf("a quantidade de homens eh: %d\na media da altura das mulheres eh: %.2f\ne a maior altura do grupo eh da %d pessoa e eh: %.2f\n", homens, media, maiorPessoa, maior);

    system("pause");
    return 0;
}