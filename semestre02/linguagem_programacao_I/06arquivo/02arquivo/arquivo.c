#include <stdio.h> 
#include <stdlib.h>

int main(){
    FILE *arquivo; 
    char palavra[10];

    arquivo = fopen("arquivo.txt", "w");

    if(arquivo == NULL){
        printf("Error: arquivo não pode ser aberto!\n");
        return 1;
    }

    printf("Digite algo para testar o arquivo: ");
    scanf("%s", &palavra);   

    fprintf(arquivo, "%s", palavra);

    fclose(arquivo);

    printf("Dados gravados!");

    getch();
    return 0; 
}
