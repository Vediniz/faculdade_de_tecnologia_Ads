#include <stdio.h> 
#include <stdlib.h> 

int main(){
    char * lojas[9] = {"loja1", "loja2", "loja3", "loja4", "loja5", "loja6", "loja7", "loja8"};
    char * mercardoria[5] = {"Maca", "Banana", "Pera", "Cebola"};
    float preco[8][4] = {{8.0, 80.0, 19.0, 78.0},{5.0, 77.0, 34.0, 56.0},{10.0, 65.0, 32.0, 74.0},{10.0, 98.0, 120.0, 38.0},
    {100.0, 100.0, 200.0, 28.0},{120.0, 54.0, 300, 82.0},{130.0, 61.0, 500.0, 292.0},{160.0, 16.0, 100.0, 29.0}};
    //float relacionando[8][4];

    for(int i=0; i < 8; i++){
        printf("\n=====");
        printf("\n%s", lojas[i]);
        for(int j=0; j < 4; j++){
            printf("\n%s: ", mercardoria[j]);
            printf(" R$%.2f\n", preco[i][j]);
        }
    }

    system("pause");
    return 0;   
}