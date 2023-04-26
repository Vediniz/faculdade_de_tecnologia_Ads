#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){ 

    int alunos, disciplina_um, disciplina_dois, disciplina_tres, aprovados_um, reprovados_um, aprovados_dois, reprovados_dois,aprovados_tres, reprovados_tres, curso_um_aprovados, curso_dois_aprovados, curso_um_reprovados, curso_dois_reprovados, curso;
    float nota_um, nota_dois, media;
    alunos = 0;
    curso_um_aprovados = 0;
    curso_um_reprovados = 0;
    curso_dois_aprovados = 0;
    curso_dois_reprovados = 0;
    nota_um = 0;
    nota_dois = 0;
    disciplina_um = 0;
    disciplina_dois = 0;
    disciplina_tres = 0;
    curso = 0;
    aprovados_um = 0;
    reprovados_um= 0;
    aprovados_dois =0;
    reprovados_dois =0;
    aprovados_tres =0;
    reprovados_tres =0;

    printf("Escolha o curso: ");
    printf("\n1 - Analise e desenvolvimento de sistemas");
    printf("\n2 -Seguranca da informacao\n");
    scanf("%d", &curso);
    
    if (curso == 1){
        while (alunos < 15){
            while (disciplina_um <5){
                printf("\nDisciplina Um");
                printf("\ndigite primeira nota: ");
                scanf("%f",&nota_um);
                printf("\ndigite a segunda nota: ");
                scanf("%f",&nota_dois);
                media = (nota_um + nota_dois)/2;
                if (media >= 6){
                    printf("Aprovado!! \n");
                    aprovados_um = aprovados_um + 1;
                    curso_um_aprovados = curso_um_aprovados + 1;
                }else{
                    printf("Reprovado!! \n");
                    reprovados_um = reprovados_um + 1;
                    curso_um_reprovados = curso_um_reprovados + 1;
                }
                printf("%.1f", media);
                printf("\n");
                disciplina_um = disciplina_um + 1; 
    
            }
            while (disciplina_dois <5){
                printf("\nDisciplina Dois");
                printf("\ndigite primeira nota: ");
                scanf("%f",&nota_um);
                printf("\ndigite a segunda nota: ");
                scanf("%f",&nota_dois);
                media = (nota_um + nota_dois)/2;
                if (media >= 6){
                    printf("Aprovado!! \n");
                    aprovados_dois = aprovados_dois + 1;
                    curso_um_aprovados = curso_um_aprovados + 1;
                }else{
                    printf("Reprovado!! \n");
                    reprovados_dois = reprovados_dois + 1;
                    curso_um_reprovados = curso_um_reprovados + 1;
                }
                printf("%.1f", media);
                printf("\n");
                disciplina_dois = disciplina_dois + 1;
            }
            while (disciplina_tres <5){
                printf("\nDisciplina Três");
                printf("\ndigite primeira nota: ");
                scanf("%f",&nota_um);
                printf("\ndigite a segunda nota: ");
                scanf("%f",&nota_dois);
                media = (nota_um + nota_dois)/2;
                if (media >= 6){
                    printf("Aprovado!! \n");
                    aprovados_tres = aprovados_tres + 1;
                    curso_um_aprovados = curso_um_aprovados + 1;
                }else{
                    printf("Reprovado!! \n");
                    reprovados_tres = reprovados_tres + 1;
                    curso_um_reprovados = curso_um_reprovados + 1;
                }
                printf("%.1f", media);
                printf("\n");
                disciplina_tres = disciplina_tres + 1;           
            }   
            alunos = alunos + 1;
        }
        //disciplina um
        printf("\n--Disciplina UM--");
        printf("\nAprovados: ");
        printf("%d", aprovados_um ,"\n");
        printf("\nReprovados: ");
        printf("%d", reprovados_um, "\n"); 
        //disciplina um end

        //disciplina dois
        printf("\n--Disciplina Dois--");
        printf("\nAprovados : ");
        printf("%d",aprovados_dois, "\n");
        printf("\nReprovados: ");
        printf("%d",reprovados_dois, "\n");
        //disciplina dois end

        //disciplina tres
        printf("\n--Disciplina Tres--");
        printf("\nAprovados na: ");
        printf("%d",aprovados_tres, "\n");
        printf("\nReprovados na: ");            
        printf("%d",reprovados_tres, "\n");
        //disciplina tres end

        printf("\n---Analise e desenvolvimento de Sistemas---\n");
        printf("\nAprovados no curso: "); 
        printf(" %d", curso_um_aprovados);

        printf("\nReprovados no curso: ");
        printf(" %d", curso_um_reprovados);

        printf("\n-------------------------------------------------\n");
        printf("\n");   
    }else{
        if (curso == 2){
        while (alunos < 15){
            while (disciplina_um <5){
                printf("\nDisciplina Um");
                printf("\ndigite primeira nota: ");
                scanf("%f",&nota_um);
                printf("\ndigite a segunda nota: ");
                scanf("%f",&nota_dois);
                media = (nota_um + nota_dois)/2;
                if (media >= 6){
                    printf("Aprovado!! \n");
                    aprovados_um = aprovados_um + 1;
                    curso_dois_aprovados = curso_dois_aprovados + 1;
                }else{
                    printf("Reprovado!! \n");
                    reprovados_um = reprovados_um + 1;
                    curso_dois_reprovados = curso_dois_reprovados + 1;
                }
                printf("%.1f", media);
                printf("\n");
                disciplina_um = disciplina_um + 1; 
    
            }
            while (disciplina_dois <5){
                printf("\nDisciplina Dois");
                printf("\ndigite primeira nota: ");
                scanf("%f",&nota_um);
                printf("\ndigite a segunda nota: ");
                scanf("%f",&nota_dois);
                media = (nota_um + nota_dois)/2;
                if (media >= 6){
                    printf("Aprovado!! \n");
                    aprovados_dois = aprovados_dois + 1;
                    curso_dois_aprovados = curso_dois_aprovados + 1;
                }else{
                    printf("Reprovado!! \n");
                    reprovados_dois = reprovados_dois + 1;
                    curso_dois_reprovados = curso_dois_reprovados + 1;
                }
                printf("%.1f", media);
                printf("\n");
                disciplina_dois = disciplina_dois + 1;
            }
            while (disciplina_tres <5){
                printf("\nDisciplina Tres");
                printf("\ndigite primeira nota: ");
                scanf("%f",&nota_um);
                printf("\ndigite a segunda nota: ");
                scanf("%f",&nota_dois);
                media = (nota_um + nota_dois)/2;
                if (media >= 6){
                    printf("Aprovado!! \n");
                    aprovados_tres = aprovados_tres + 1;
                    curso_dois_aprovados = curso_dois_aprovados + 1;
                }else{
                    printf("Reprovado!! \n");
                    reprovados_tres = reprovados_tres + 1;
                    curso_dois_reprovados = curso_dois_reprovados + 1;
                }
                printf("%.1f", media);
                printf("\n");
                disciplina_tres = disciplina_tres + 1;           
            }   
            alunos = alunos + 1;
        }
        //disciplina um
        printf("\n--Disciplina Um--");
        printf("\nAprovados: ");
        printf("%d", aprovados_um ,"\n");
        printf("\nReprovados: ");
        printf("%d", reprovados_um, "\n"); 
        //disciplina um end

        //disciplina dois
        printf("\n--Disciplina Dois--");
        printf("\nAprovados: ");
        printf("%d",aprovados_dois, "\n");
        printf("\nReprovado: ");
        printf("%d",reprovados_dois, "\n");
        //disciplina dois end

        //disciplina tres
        printf("\n--Disciplina Tres--");
        printf("\nAprovados: ");
        printf("%d",aprovados_tres, "\n");
        printf("\nReprovados: ");            
        printf("%d",reprovados_tres, "\n");
        //disciplina tres end

        printf("\n \n---Seguranca da Informacao---\n");
        printf("\nAprovados no curso: "); 
        printf(" %d", curso_dois_aprovados);

        printf("\nReprovados no curso: ");
        printf(" %d", curso_dois_reprovados);

        printf("\n-------------------------------------------------\n");
        printf("\n");   
    }else{
        printf("Invalido\n");    
    }
    }

    system("pause");
    system("cls");
    return 0;

}

