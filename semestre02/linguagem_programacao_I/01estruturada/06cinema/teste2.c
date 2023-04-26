#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    char nome[20];
    int idade;
    struct no *next;
} no;

struct no *a,*b,*g;
int i;
int main()
{
    a=NULL;
    b=NULL;
    g=NULL;
    for(i=1; i<=5; i++)
    {
        if (g == NULL)
        {
        printf("\n Informe os dados da %d pessoa",i);
        a=(no*)malloc(sizeof(no));
        printf("\n Informe o nome ");
        scanf("%s",&a->nome);
        printf("\n Informe a idade");
        scanf("%d",&a->idade);
        g=a;
        a->next = NULL;
        b=a;

        }else {
        printf("\n Informe os dados da %d pessoa",i);
        b=(no*)malloc(sizeof(no));
        printf("\n Informe o nome ");
        scanf("%s",&b->nome);
        printf("\n Informe a idade");
        scanf("%d",&b->idade);
        a->next =b;
        b->next = NULL;
        a=b;
        }
}


   a=g;
   system("cls");
   while (a!=NULL)
   {

       printf("\n\n");
       printf("\n Nome da pessoa %s",a->nome);
       printf("\n Idade da pessoa %d",a->idade);

       a=a->next;
   }

   system("pause");
}


