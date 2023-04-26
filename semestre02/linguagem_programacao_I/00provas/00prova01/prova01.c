#include <stdio.h>
#include <stdlib.h>

int main(){
    int codigoDoProduto, quantidadeComprada = 0;
    float precoUnitario, total, desconto, totalComDesconto = 0;
    printf("Codigo do produto: ");
    scanf("%d", &codigoDoProduto);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidadeComprada);

    if(codigoDoProduto <= 10){
        precoUnitario = 10;
    }
    else if(codigoDoProduto <= 20){
        precoUnitario = 15;
    }
    else if(codigoDoProduto <=  30){
        precoUnitario = 20;
    }
    else if(codigoDoProduto <= 40){
        precoUnitario = 30;
    }
    else{
        precoUnitario = 0;
        printf("codigo invalido...\n");
    }
    total = precoUnitario * quantidadeComprada;
    if(total < 250){
        desconto = total * 0.05;
    }
    else if(total <= 500 ){
        desconto = total * 0.10;
    }
    else{
        desconto = total * 0.15;
    }
    
    totalComDesconto = total - desconto;
    printf("=========- Nota -=========");
    printf("\nCodigo do Produto: %d\nQuantidade Comprada: %d\nPreco Unitario:R$ %.2f\nTotal da Conta: R$ %.2f\nDesconto Aplicado: %.f\nTotal a pagar:R$ %.2f ", codigoDoProduto, quantidadeComprada, precoUnitario, total, desconto, totalComDesconto);

    system("pause");
    return 0;
}