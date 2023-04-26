#include <stdio.h>
#include <stdlib.h>

int main(){
    int somamatrixColuna[3];
    int somamatrix[3];
    int matrix [3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};

    for(int i = 0; i < 3; i++){
        somamatrix[i] = 0; 
        for(int j = 0; j < 3; j++){
            somamatrix[i] = somamatrix[i] + matrix[i][j];
        }
    }
     for(int i = 0; i < 3; i++){
        somamatrixColuna[i] = 0; 
        for(int j = 0; j < 3; j++){
            somamatrixColuna[j] = somamatrixColuna[j] + matrix[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        printf("\nSoma das linhas %d: %d", i, somamatrix[i]);
    }
    for(int i = 0; i < 3; i++) {
                printf("\n soma das colunas%d: %d", i, somamatrixColuna[i]);

    }

    system("pause");
    return 0;
}