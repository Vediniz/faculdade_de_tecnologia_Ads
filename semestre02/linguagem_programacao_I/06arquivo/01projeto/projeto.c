#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct Dados{
    int codigo;
    char descricao[20];
    float venda;
    float custo;
    int fone;
    int quantidade;
    int status;
} fornecedor;

void cadastro(){

    char numstr[10];
    char resp;
    FILE *fptr;
    fornecedor fatec;
    resp='S';
    fptr = fopen("\\ARQPROD","ab");

    if(fptr == NULL)
    {
        printf("\n Erro Durante Abertura do Arquivo - ARQPROD");
        system("pause");
    }
    else
    {

        do
        {
            system("cls");
            printf("\n -------------------------------------------");
            printf("\n ************ FATEC AMERICANA **************");
            printf("\n --------- CADASTRO DE PRODUTOS ------------");
            printf("\n -------------------------------------------");

            printf("\n Digite o Codigo do Produto");
            scanf("%d",&fatec.codigo);
            fflush(stdin);

            printf("\n Digite a Descricao do Produto");
            gets(fatec.descricao);
            fflush(stdin);

            printf("\n Digite o Valor Custo");
            scanf("%f",&fatec.custo);
            fflush(stdin);

            printf("\n Digite o Telefone do Fornecedor");
            gets(numstr);
            fatec.fone = atoi(numstr);
            fflush(stdin);

            printf("\n O valor de Venda do Produto");
            fatec.venda = fatec.custo *1.20;
            printf("%.2f \n",fatec.venda);


            printf("\n Digite a Quantidade do Produto");
            scanf("%d",&fatec.quantidade);
            fflush(stdin);


            fwrite(&fatec,sizeof(fornecedor),1,fptr);


            printf("\n Deseja continuar o Cadastro [Sim] ou [N�o]");
            //scanf("%c",&resp);
        }while(getchar() == 's' || getchar() == 'S');
         fclose (fptr);
    }

}

void altera(){
      int c, achou;
    system("cls");
    printf("\n ------------------------------------------------");
    printf("\n ---------- FATEC AMERICANA ---------------------");
    printf("\n -----------   ALTERACAO-------------------------");
    printf("\n ------------------------------------------------");

    FILE *fptr;

    fornecedor fatec;

    char nome[20];

    fptr=fopen("\\ARQPROD","rb+");

    if (fptr == NULL)
    {
        printf("\n Erro durante Abertura de Arquivo");
        system("pause");
    }else {

  printf("\n Informe o nome a ser alterado");
  scanf("%s", &nome);
  fflush(stdin);
  c=0;
  // estou posicionando o ponteito no primeiro record
   fread(&fatec,sizeof(fornecedor), 1, fptr);
   // enquanto n�o for final de arquivo e o nome sejam diferentes permane�a em looping
   //eof end of file quando fptr for final de arquivo ele recebe NULL
   // o weeligton ja sabe disso kkkkk
   while(!feof(fptr) && strcmp(nome,fatec.descricao)!=0)
   {
       fread(&fatec,sizeof(fornecedor), 1, fptr);
       c++;
   }
       if(feof(fptr))
       {
           printf("\n Registro n�o foi encontrado no Arquivo");
           getch();
       }else {
       // NESTA LINHA ESTOU CONGELANDO O PONTEIRO NA POSI��O DO MESMO, PERTIMINDO QUE EU FA�A
       //ALTERA��O
       fseek(fptr,c*sizeof(fornecedor),SEEK_SET);
        printf("\n Codigo :.......%d",fatec.codigo);
                printf("\n Descricao ..:%s  Entre com a Nova Descri��o.",fatec.descricao);
                scanf("%s",&fatec.descricao);
                fflush(stdin);

                printf("\n Custo .....%.2f",fatec.custo);
                scanf("%f",&fatec.custo);
                fflush(stdin);
              //  printf("\n Venda......%.2f",fatec.venda);
              //  scanf("%f",&fatec.venda);
                printf("\n Quantidade.%d Entre com o nova quantidade :",fatec.quantidade);
                scanf("%d",&fatec.quantidade);
                printf("\n Fone.......%d   Entre com o novo Fone ..:",fatec.fone);
                scanf("%d",&fatec.fone);

                // gravando altera��o
                fwrite(&fatec,sizeof(fornecedor),1,fptr);
                printf("\n Registro alterado com sucesso");
                printf("\n\n");
                system("pause");

       }

   }
     fclose(fptr);


}

void relatorio(){
    FILE *fptr;
    fornecedor fatec;
    int cab;
    cab=0;
    fptr=fopen("\\ARQPROD","rb");

    if(fptr == NULL)
    {
        printf("\n Erro durante abertura do Arquivo ARQPROD");
        system("pause");

    }
    else
    {

        printf("\n");
        printf("\n ---------------------------------------------------");
        printf("\n -------- Relatario dos Fonecedores ----------------");
        printf("\n ---------------------------------------------------");
        // linha cabe�alho
        printf("\n Codigo\tDescricao \t Custo \t Venda \t Quantidade");
        printf("\n----------------------------------------------------");
        printf("\n");

        while(fread(&fatec,sizeof(fornecedor),1,fptr))
        {
            if( cab > 5)
            {
                printf("\n");
                printf("\n -------------------------------------------");
                printf("\n -------- Relatario dos Fonecedores --------");
                printf("\n -------------------------------------------");
                printf("\n Codigo\tDescricao \t Custo \t Venda \t Quantidade");
                printf("\n----------------------------------------------------");
                printf("\n");
                // linha do cabe�alho


                // Linha Detalhe
                printf("\n %d\t%s\t%.2f\t%.2f\t%d",fatec.codigo,fatec.descricao,fatec.custo,fatec.venda,fatec.quantidade);
                printf("\n");
                cab=0;
            }
            else
            {
                 printf("\n %d\t%s\t%.2f\t%.2f\t %d",fatec.codigo,fatec.descricao,fatec.custo,fatec.venda,fatec.quantidade);
                 printf("\n");
              //   printf("\n %-10d %-10s %-152.f %10.2f %15d",fatec.codigo,fatec.descricao,fatec.custo,fatec.venda,fatec.quantidade);
                cab++;
            }
        }

        system("pause");
        printf("\n\n");
        fclose(fptr);
    }
}



void pesquisa(){
    int achou;
    system("cls");
    printf("\n ------------------------------------------------");
    printf("\n ---------- FATEC AMERICANA ---------------------");
    printf("\n -----------   PESQUISA -------------------------");
    printf("\n ------------------------------------------------");

    FILE *fptr;

    fornecedor fatec;

    char pesq[20];

    fptr=fopen("\\ARQPROD","rb");

    if (fptr == NULL)
    {
        printf("\n Erro durante Abertura de Arquivo");
        system("pause");
    }else {

        printf("\n Informe o nome a ser Pesquisado");
        scanf("%s",&pesq);
        achou =0;

        while (fread(&fatec,sizeof(fornecedor),1,fptr))
        {
            if(strcmp(pesq,fatec.descricao)==0)
            {
                printf("\n Codigo ....... %d",fatec.codigo);
                printf("\n Descricao ... %s",fatec.descricao);
                printf("\n Custo ..... %.2f",fatec.custo);
                printf("\n Venda ...... %.2f",fatec.venda);
                printf("\n Quantidade .. %d",fatec.quantidade);
                printf("\n Fone ....... %d",fatec.fone);
                printf("\n\n");
                achou =1;
                system("pause");
                break;
            }

        }

    if(achou ==0)
    {
        printf("\n Registro nao foi encontrado no Arquivo");
        system("pause");
    }
      fclose(fptr);
    }

}

void remover(){
    int codigo; 
    int c; 
    int achou;

    FILE *fptr;
    FORNECEDOR fatec; 

    fptr = fopen("\\ARQPROD","ab+")
    if(fptr == NULL){
        
    }

}

main(){
    int op;
    do
    {
        system("cls");

        printf("\n [1] - Cadastro de Produto");
        printf("\n [2] - Relatario do Estoque");
        printf("\n [3] - Consulta por Produto");
        printf("\n [4] - Alteracao do Produto");
        printf("\n [5] - Remocao Logica do Produto");

        printf("\n Informe a OPcao desejada");
        scanf("%d",&op);

        switch (op){
            case 1:
                cadastro();
                break;
            case 2:
                relatorio();
                break;
            case 3:
                pesquisa();
                break;
            case 4:
                altera();
                break;
            case 5: 
                remover();
            default :
                printf("\n Opcao Invalida... Tente novamente");
                system("pause");
        }
    }
    while(op !=5);



}

