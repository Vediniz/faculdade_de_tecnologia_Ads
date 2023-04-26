#include <stdio.h> 
#include <stdlib.h>

int main(){
    float precoUnitario, produtoArmazenamento = 0;
    int produtos;
    char refrigeracao, categoria;

    printf("Digite a qauntidade de produtos: ");
    scanf("%d", &produtos);

    for(int i = 0; i < produtos; i++){
        printf("Digite o preco unitario: ");
        scanf("%f",&precoUnitario);
        printf("\n Precisa de refrigeracao[S/N]: ");
        scanf("%c%*c", &refrigeracao);
        //fflush(stdin);
        refrigeracao = toupper(refrigeracao);
        printf(" \n [A] Alimentacao \n [L] Limpeza \n [V] Vestuario \nDigite a categoria: ");
        scanf("%c%*c", &categoria);
        categoria = toupper(categoria);

        if(precoUnitario <= 50){
            if(categoria == 'A'){
                produtoArmazenamento = produtoArmazenamento + 5;
            }
            else if(categoria == 'L'){
                produtoArmazenamento = produtoArmazenamento + 10;
            }
            else if(categoria == 'V'){
                produtoArmazenamento = produtoArmazenamento + 15;
            }
        }
        else if( precoUnitario <= 70){
            if(refrigeracao == 'S'){
                produtoArmazenamento = produtoArmazenamento + 21;
            }
            else if(refrigeracao == 'N') {
                produtoArmazenamento = produtoArmazenamento + 12;
            }
        }
        else if( precoUnitario > 70){
            if(refrigeracao == ' S'){
                if(categoria = 'A'){
                    produtoArmazenamento = produtoArmazenamento + 6;
                }
                else if(categoria = 'L'){
                    produtoArmazenamento = produtoArmazenamento + 2;
                }
                else if(categoria = 'V'){
                    produtoArmazenamento = produtoArmazenamento + 4;
                }
            }
            else if(refrigeracao == 'N'){
                if(categoria = 'L'){
                    produtoArmazenamento = produtoArmazenamento + 1;
                }
            }
        }
      
    }
    printf("O valor final é: ");
    printf("\n %.2f \n", produtoArmazenamento);
    if (produtoArmazenamento <= 50){
            printf("Barato!!\n");
    }
        else if(produtoArmazenamento <=70 ){
            printf("Normal!!!\n");
        }
        else if( produtoArmazenamento > 70 ){
            printf("Caro!!\n");
        }
        

    system("pause");
    return 0;
}