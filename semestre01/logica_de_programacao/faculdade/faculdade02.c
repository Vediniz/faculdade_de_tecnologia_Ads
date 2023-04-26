#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int  curso, disciplina, alunos; //contadores
    int curso_total, disciplina_total, curso_aprovados, curso_reprovados, alunos_total; //total
    int nota_um, nota_dois, media; //notas
    int aprovado, reprovado;
    char curso_nome; //nomes
    media =  (nota_um + nota_dois)/2;

    curso = 0;

    printf("Qual a quantidade de curso? ");
    scanf("%d", &curso_total);

      while (curso <curso_total){
        //printf("Entre com o curso: ");
        //scanf("%c", &curso_nome);

        disciplina = 0;
        curso_aprovados = 0;
        curso_reprovados = 0;

        printf("Qual a quantidade de disciplinas nesse curso? ");
        scanf("%d", &disciplina_total);
        while(disciplina < disciplina_total){
            printf("Quantidade de alunos: ");
            scanf("%d", &alunos_total);
            alunos = 0;
            while(alunos < alunos_total){
                printf("Digite a primeira nota: ");
                scanf("%d", &nota_um);
                printf("Digite a segunda nota: ");
                scanf("%d", &nota_dois);

                if (media >= 6){
                    printf("\nAprovado\n");
                    aprovado = aprovado + 1;
                }
                else {
                    printf("\nReprovado\n");
                    reprovado = reprovado + 1;
                }
                alunos = alunos + 1;

                
            }
            disciplina = disciplina + 1;
        }
        curso = curso + 1;
    } 
  
    //printf("%d",curso_total);

    system("\npause");
    return 0;
}