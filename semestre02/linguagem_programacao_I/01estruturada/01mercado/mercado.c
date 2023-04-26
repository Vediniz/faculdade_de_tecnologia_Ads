/*Em um supermercado se encontra em promoção, o Cliente que vier a consumir acima de R$ 300,00, o  mesmo terá o direito de desconto de 10% sobre o valor que exceder o valor mencionado. 

Dados de Entrada – Valor da Compra 

Dados de Saida -  Valor do Desconto  e valor a Pagar. */


#include <stdio.h>
#include <stdlib.h>

int main(){
    float pagar, desc;
    int n;
    
    printf("Digite a quantidade produtos: ");
    scanf("%d", &n);

    for (int i = 0; i < n ; i++){

    printf("Digite o valor a pagar do %dº valor: \n", i);
    
    scanf("%f", &pagar);

    if(pagar > 300){
        desc = pagar - 300;
        desc = desc *0.10;
        printf("o desconto eh: %2.f reais", desc);
    }
    printf("\nO valor a pagar eh %2.f reais \n", pagar - desc);
    //system("pause");
    }
    system("pause");
    return 0;
    
}
