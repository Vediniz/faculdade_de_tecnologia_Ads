#include <stdio.h>
#include <stdlib.h>

int main(){
    char procedencia[15][15] = {"Sul", "Norte", "Leste", "Oeste", "Nordeste", "Sudeste", "Centro-Oeste"};
    int codigo;

    printf("Digite o codigo: "); 
    scanf("%d", &codigo);

    if(codigo == 1){
        printf("%s", procedencia[0]);
    }
    else if(codigo == 2){
        printf("%s", procedencia[1]);
    }
    else if(codigo == 3){
        printf("%s", procedencia[2]);
    }
    else if(codigo == 4){
        printf("%s", procedencia[3]);
    }
    else if(codigo <= 6){
        printf("%s", procedencia[4]);
    }
    else if(codigo <= 9){
        printf("%s", procedencia[5]);
    }
    else if(codigo <= 20){
        printf("%s", procedencia[6]);
    }
    printf("\n");
    system("pause");
    return 0;
}