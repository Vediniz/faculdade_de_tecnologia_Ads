#include <stdio.h>
#include <stdlib.h>

int main(){
    int alunos, alunos_loop, notas , aprovados, reprovados, substitutiva;
    alunos_loop = 1;
    aprovados = 0;
    reprovados = 0;
    substitutiva = 0;

    printf("Qual a quantidade de alunos?");
    scanf("%d", &alunos);

    while (alunos_loop <= alunos ){
        printf("Entre com a nota: \n");
        scanf("%d",&notas);
        
        if (notas >= 6 ){
            aprovados = aprovados + 1;
        }else{
            if (notas >= 3){
                substitutiva = substitutiva + 1;
            }
            else{
                reprovados = reprovados + 1;
            }
        }
        alunos_loop = alunos_loop + 1;

    }
    printf("\n A quantidade de alunos aprovados eh: %d", aprovados);
    printf("\n A quantidade de alunos reprovados eh: %d", reprovados);
    printf("\n A quantidade de alunos para substitutiva eh: %d", substitutiva);
    printf("\n");

    system("pause");
    return 0;

}

/*Exibir a quantidade de alunos APROVADOS (media >= 6), SUBSTITUTIVA (media >=3 e media <6) e REPROVADOS (media , 3) de determinada classe.
 A quantidade de alunos da classe deverá ser fornecida pelo usuário.*/