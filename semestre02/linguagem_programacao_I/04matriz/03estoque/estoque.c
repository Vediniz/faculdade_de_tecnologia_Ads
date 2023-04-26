#include <stdio.h>
#include <stdlib.h>

int main(){
    char produto[10][10];
   // int estoque[6];

    for(int i = 0; i < 5; i++){
        printf("Digite o nome do produto: ");
        setbuf(stdin, NULL);
        fgets(produto[i], 5, stdin);
       
    }

     for(int i=0; i < 5; i++){
        printf("%s", produto[i]);

    }
    printf("\n");
    system("pause");
    return 0;
}

/*Faça um programa  que : 

 

Receba cinco nomes de produtos e armazene em um vetor; 

Receba o estoque desses produtos em cada  um dos cinco armazéns (matriz); 

Receba o custo dos cinco produtos e armazene-os em outro vetor; 

 

Calcule e Mostre : 

O total de itens armazenados em cada armazém; 

O total de itens armazenados de cada produto; 

O custo total de cada armazém; 

O nome do produto e o numero do armazém que possui maior  numero de itens  estocados; 

O nome do produto que possui o menor custo; */