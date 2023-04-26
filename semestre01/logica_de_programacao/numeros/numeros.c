#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese"); 
    setlocale(LC_ALL, "");
    int num1, num2, num3; 

    printf("Por favor insira o primeiro número: ");
    scanf("%d",&num1);
    printf("Por favor insira o segundo número: ");
    scanf("%d",&num2);
    printf("Por favor insira o terceiro número: ");
    scanf("%d",&num3);
      printf("Em ordem crescente: ");
    if (num1<num2 && num2 < num3){
        printf("%d %d %d", num1,  num2, num3);
    }else{
        if(num1<num3 && num3 < num2){
            printf("%d %d %d", num1, num3, num2);
        }
        if(num2 < num1 && num1 < num3 ){
            printf("%d %d %d", num2, num1, num3);
        }
        if(num2<num3 && num3<num1){
            printf("%d %d %d", num2, num3, num1);
        }
        if(num3<num1 && num1 < num2){
            printf("%d %d %d", num3, num1, num2);
        }
        if(num3<num2 && num2<num1){
            printf("%d %d %d",num3, num2, num1);
        }
        
    }
    printf("\n");
    system("pause");
    return 0;
}
/*
Elaborar programa C para exibir em ordem crescente os 3 números inteiros informados pelo usuário. 
Podem fazer em grupo.
TODOS devem enviar a solução no formato .C
*/