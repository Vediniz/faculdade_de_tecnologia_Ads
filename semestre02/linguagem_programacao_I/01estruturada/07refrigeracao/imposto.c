#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
    char cat, ref;
    int i,n;
    float valor, custo, imposto,total;

    printf("\n Informe a quantidade de produtos");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {

        printf("\n Informe o valor do Produto");
        scanf("%f",&valor);

        printf("\n Informe a Categoria [A]limentação [L]mpeza [V]estuario");
        scanf(" %c", &cat);
        cat = toupper(cat);

        printf("\n Informe sobre a refrigeração  [S]im ou [N]ão");
        scanf(" %c",&ref);
        toupper(ref);

        if(valor <=50 && cat == 'A')
        {
            custo =5;
        }
        else if(valor <= 50 && cat == 'L')
        {
            custo = 10;
        }
        else if(valor <=50 && cat == 'V')
        {
            custo =15;
        }
        else if(valor > 50 && valor <= 70)
        {
            if(ref == 'S')
            {
                custo = 21;
            }
            else
            {
                custo = 12;
            }
        }
        else if( valor >70 && ref =='S' && cat == 'A')
        {
            custo = 6;

        }
        else if(valor > 70 && ref == 'S' && cat == 'L')
        {
            custo =22;
        }
        else if(valor >70 && ref == 'S' && cat == 'V')
        {
            custo = 4;
        }
        else if(valor > 70 || cat =='A' || cat == 'V')
        {
            custo =0;
        }
        else
        {

            custo = 1;
        }



        // Calculado imposto

        if(cat == 'A' && ref == 'S')
        {
            imposto = valor * 0.04;
        }
        else
        {
            imposto = valor * 0.02;
        }

        printf("\n O valor do Custo do Armazenamento %.2f", custo);
        printf("\n O valor do Imposto %.2f",imposto);
        total = (valor+imposto+custo);
        printf("\n Total do Produto %.2f", total);

        if(total <=50)
        {
            printf("\n Produto Barato...");
        }else if(total > 50 && total <70)
        {
            printf("\n Produto Normal...");
        }else{

            printf("\n Produto Caro....");

        }

    }
}
