#include <stdio.h> 
#include <stdlib.h> 


int main(){
    //char palavra;
    FILE *arquivo;
    
    arquivo = fopen("arquivo.txt", "rb");

    //scanf("%s", &palavra);
    //fprintf(arquivo, "%s\n", palavra);

     

    fclose(arquivo);

    printf("\n");
    system("pause");
    return 0;
}
