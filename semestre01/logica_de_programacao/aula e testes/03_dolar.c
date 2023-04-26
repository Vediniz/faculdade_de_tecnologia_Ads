#include <stdio.h>
#include <stdlib.h>

int main (){
    //variaveis
    float real, dolar, valor;
    //definir valores
    dolar = 5.29;
    //mensagem para o "usuario"
    printf("Insira o valor em reais:\n");
    //recebe valor do teclado
    scanf("%f",&real);
    //converte reais para dolar
    valor = real*dolar;
    //exibir valor em dolares
    printf("O valor em dolar: %.2f", valor);


    return 0;
}
