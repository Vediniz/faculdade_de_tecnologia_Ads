#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int number = 0; //use to loops
int i;
int option[3]; // break loops
int supervisor[10][10][10];
int contador = 0;
int j, linha = 0;
int list[10];//conta loop de compra da pessioa [i]


//struct to register a product
struct registerAProduct{
    char nameOfProduct[10][20];
    int quantity[10];
    float price[10];


};
struct registerAProduct product;
//struct to register a purchase
struct note{
    char namePerson[10][20];
    char selectedProduct[10][20][10][10];
    int quantityToBuy[10][10][10];
    float pricePerson[10][10][10];
    int loop[10];
    float total[10];
};

struct note person;
//receive data to struct registerAProduct
void registerAProduct(){
    printf("Informe o numero de produtos: ");
    scanf("%d", &number);//number
    //loop to receive more of one data
    for(i = 0; i < number; i++){
            setbuf(stdin, NULL);
            printf("\nInforme o nome do produto: ");
            fgets(product.nameOfProduct[i], 20, stdin);//nameOfProduct
            printf("Informe a  quantidade a ser armazenada: ");
            scanf("%d", &product.quantity[i]);//quantity
            printf("Informe o preco por unidade: ");
            scanf("%f", &product.price[i]);//price

            printf("Nome do Produto: %s", product.nameOfProduct[i]);
            printf("Quantidade disponivel: %d", product.quantity[i]);
            printf("\n Preco: %.2f ", product.price[i]);

            //int quantidadeTotal =0 product.quantity[i];      << Para terminar (Total de produtos cadastrado(quantidade)para loops)  
    }
}

//show the products in inventory
void inventory(){
    //show items in inventory(name, quantity, price)
    printf("\n==-===-===-===-===-===-===-");
    for (i = 0; i < number; i++){
        printf("\nProduto: %s-------", product.nameOfProduct[i]);//Product
        printf("\nQuantidade: %d\n----", product.quantity[i]);//Quantity
        printf("\nPreco: %.2f\n----\n", product.price[i]);//Price
    }
    printf("==-===-===-===-===-===-===-");
}
//
void buy(){
    while(1){
        for (i = 0; i < product.quantity; i++){
            for(j = 0; j < product.quantity; j++){
                setbuf(stdin, NULL);
                printf("\nInforme o nome do produto: ");
                fgets(person.selectedProduct[linha][i][j], 20, stdin);
                printf("\nQuantidade a ser comprada: ");
                scanf("%d", &person.quantityToBuy[linha][i][j]);

                printf("%s", person.selectedProduct[linha][i][j]);
                printf("%d", person.quantityToBuy[linha][i][j]);
                list[linha]++;

                for(int k = 0; k < 100; k++){
                    if(strcmp(person.selectedProduct[linha][i][j], product.nameOfProduct[k]) == 0 ){
                        product.quantity[k] -= person.quantityToBuy[linha][i][j]; 
                        person.pricePerson[linha][i][j] = person.quantityToBuy[linha][i][j] * product.price[k];
                        if(product.quantity[k] == 0 ){
                            printf("\nEstoque Vazio ...");
                            break;
                        }
                    else if(strcmp(person.selectedProduct[linha][i][j], product.nameOfProduct[k]) != 0 ){
                        printf("Item não encontrado .... ");
                    }

                }
                }                
                printf("\nDeseja continuar? \n[1] Sim \n[2] Nao\n");
                scanf("%d", &option[2]);
        
                if (option[2] == 2){
                    setbuf(stdin, NULL);
                    printf("Digite seu nome: ");
                    fgets(person.namePerson[linha], 20, stdin);
                    break;
                }
            }
            break;
        }
        linha++;
        break;
    }

}
void note(){
    printf("=-=====-======-======-======-======-====");
        for(int linhaDois = 0; linhaDois < linha; linhaDois++){
            printf("\nComprador: %s", person.namePerson[linhaDois]);
            for(i=0; i < list[linhaDois]; i++){
                for(j = 0; j < list[linhaDois]; j++){
                printf("\nProdutos comprados: %s", person.selectedProduct[linhaDois][i][j]);
                printf("\nQuantidade de produtos: %d", person.quantityToBuy[linhaDois][i][j]);
                printf("\nPreco: %.2f", person.pricePerson[linhaDois][i][j]);
                person.total[linhaDois] += person.pricePerson[linhaDois][i][j];
            } 
            printf("\n\nTOTAL:%.2f", person.total[linhaDois]);

            break;
        }

            
    }
    printf("\n=-=====-======-======-======-======-====\n");
    system("pause");

}
int main(){
//navigation menu;
    while (option[0] != 5){
        system("cls");
        printf("\n[1] Registro de Produtos: \n[2] Compra de Produtos: \n[3] Nota\n[5] Finalizar\n");
        setbuf(stdin, NULL);
        scanf("%d", &option[0]);
        switch(option[0]){
            case 1:
                registerAProduct();
                break;
            case 2: //Show the inventory and buy itens in it
                inventory();
                buy();
                break;
            case 3:
                note();
                break;
            case 5:
                break;
            default:
                printf("Opcao de entrada invalida");
        }
    }
    printf("\nVoce escolheu sair ... Finalizando...\n");

    system("pause");
    return 0;
}



//vetor para quebrar loops e não criar conflito por usar uma variavel apenas;
//structs para armazenar os dados como registro de produtos e compra;
//
