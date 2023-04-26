#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int pessoas = 0, i, op = 0, soma = 0, impar = 0, maior = 0, menor = 0;
int idade[100];
char nome[10][10];
char nomeMaior[10];
char nomeMenor[10];

void dados(){
    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &pessoas);
    for (i = 1; i <= pessoas; i++){
       
        printf("Digite o nome da %da pessoa:\n", i);
        fgets(nome, 10, stdin);
        setbuf(stdin, NULL);
        printf("digite a idade da %da pessoa:\n ", i);
        scanf("%d", &idade[i]);
        setbuf(stdin, NULL);
    }
}   
void process(){
    for(int i = 1; i <= pessoas; i++){
        if( i == 1){
            maior = idade[i];
            menor = idade[i];
        }
        else if(idade[i] > maior){
            maior = idade[i];
            strcpy(nomeMaior, nome); 
        }
        else if(idade[i] < menor){
            menor = idade[i];  
            strcpy(nomeMenor, nome);
        }
        if (idade[i] % 2 == 0){
            soma += idade[i]; 
        }
        else if(idade[i] % 2 != 0 ){
            impar += 1; 
        }
        setbuf(stdin, NULL);
    }
    printf("A maior idade encontrada foi %d anos, de: %s \n", maior,nomeMaior);
    printf("A menor idade encontrada foi %d anos, de: %s \n", menor, nomeMenor);
    printf("A soma das idades pares foi: %d\n", soma);
    printf("A quantidade de idades impares foi: %d\n", impar);
    system("pause");
}
void main(){
    do{
        system("cls"); 
        printf("\n[1] Carregando os dados do Vetor:\n[2] Processar e Exibir Dados:\n[3] Pesquisando o nome no vetor:\n[4]Exibindo Dados:\nEscolha uma opcao: ");
        scanf("%d", &op);
        setbuf(stdin, NULL);

        switch (op) {
            case 1: 
                dados();
                break;
            case 2: 
                process();
                break;
            case 3: 
                printf("#");
            case 4: 
                printf("#");
            default:
                printf("Inválido....");
        }
            
    }
    while(op != 5);
}