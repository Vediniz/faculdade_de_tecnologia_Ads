#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Declarando Variaveis
char produto[10][20];
int quantidade[10];
float valor[10];
int opcao, quantidadeDeProdutos = 0;

//Função Cadastro: Nome do produto; Quantidade disponivel; valor por unidade;
void cadastro(){
    printf("Quantidade de produtos: ");
    scanf("%d",&quantidadeDeProdutos);
    for(int i = 1; i <= quantidadeDeProdutos; i++){
        setbuf(stdin, NULL);
        printf("%do Produto: ", i);
        fgets(produto, 20, stdin);

        printf("Quantidade: ");
        scanf("%d", &quantidade[i]);
        //fflush(stdin);

        printf("Valor Unitario: ");
        scanf("%f", &valor[i]);

        printf("%s", produto);
        printf("%d\n", quantidade[i]);
        printf("%.2f\n", valor[i]);
    }
}
//Função estoque: Mostra itens em estoque;
void estoque(){
    for(int i = 1; i <= quantidade; i++){
        printf("%s", produto[i]);
        printf("%d", quantidade[i]);
    }
}

//Função main
int main(){
    printf(" [1] Cadastro\n[2] Vendas\n[3] Relatório");
    scanf("%d", &opcao); 
    switch(opcao){
        case 1:
            cadastro();
            break;
        case 2: 
            printf("#####");
            break; 
        case 3: 
            printf("####");
        default: 
            printf("Invalido");
            break;
    }
    system("pause");
    return 0;

}



/*Projeto
Desenvolva um Projeto, que faça um Controle de Estoque, aplicando Vetores para ( Produto), Quantidade, Valor Unitário).
Desenvolver as seguintes Funções :

- Cadastro dos Produtos ( Descrição do produto, Quantidade e Valor);

- Baixa do Estoque – Antes de Efetuar a Baixa, verificar se a quantidade solicitada possui em estoque, caso seja menor,
 informar ao usuário Estoque Insuficiente, em caso do produto ter a quantidade fazer a baixa;

- Exibir os produtos em Estoque bem como a sua quantidade(atualizada);

- A cada Baixa ou venda, fazer o lançamento do nome do Cliente.

- Gerar a saída em um vetor contendo (Nome do Cliente, quantidade, Valor Total e o Produto).

- Exibir um Relatório de Saida;
 */
