#include <stdio.h>
#include <stdlib.h>

int main(){
    int cpf[11]; // Quantidade de digitos armazenados por cpf
    int cpfConta[11] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1}; //Digitos para contas de digito cpf(cpfConta[i] x cpf[i])
    int digito, digitoUm, digitoUmConta, digitoDois, digitoDoisConta = 0; //variaveis usadas para armazenar e fazer operações para os digitos faltantes

system("Pause");
    for(int i = 0; i < 9; i++){//Receber os 9 primeiros digitos do cpf
        setbuf(stdin, NULL);
        printf("\nDigite o %d numero do CPF: ", i+1);
        scanf("%d", &cpf[i]);//armazena os numeros em suas posições no vetor cpf

        digito = cpf[i] * cpfConta[i+1];//cpf do vetor x numero do cpfConta, excluindo o primeiro termo(11)
        digitoUmConta = digito +  digitoUmConta; // soma todas as contas feitas pelo cpfConta x cpf
        digitoUm = digitoUmConta % 11; // pega o modulo(resto)

        if (digitoUm < 2 ){//resto < 2, por regra, o valor se torna 0 e armazena na posição 9(10 no cpf)
            cpf[9] = 0;
        }
        else{
            cpf[9] = 11 - digitoUm; // caso resto > 2, subtrai o resto e 11 e armazena na posição 9(10 no cpf)
        }
    }
  
    for (int i = 0; i < 10; i++){//para nova conta, agora com o 10 digito incluso
        digito = cpf[i] * cpfConta[i];//cpf do vetor x cpfConta do vetor, agora incluindo o 11
        digitoDoisConta = (digito +  digitoDoisConta); // soma os valores
        digitoDois = digitoDoisConta % 11; //resto 

        if (digitoDois < 2){// resto < 2, digito == 0 e armazena em 10[11 no cpf]
            cpf[10] = 0;
        }
        else{
            cpf[10] = 11 - digitoDois;//senão, 11 - digito e armazena em 10(11 no cpf)
        }
    }
    for (int i = 0; i < 11; i++){//loop para printar todos os termos dos vetores
        printf("%d ", cpf[i]);//printa o cpf todo, já com os digitos faltantes inclusos
    }    
    system("Pause");
    return 0;
}