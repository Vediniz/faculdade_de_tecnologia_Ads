#include <stdio.h>
#include <stdlib.h>

int main(){
    struct cadAluno{
        char nome[20];
        float nota1;
        float nota2;
        float nota3;
        float nota4;
    };
    struct cadAluno aluno;
    float media;

    printf("Informe o  nome do aluno: ");
    fgets(aluno.nome, 20, stdin);
    setbuf(stdin, NULL);

    printf("Digite a 1a nota: ");
    scanf("%f", &aluno.nota1);
    printf("Digite a 2a nota: ");
    scanf("%f", &aluno.nota2);
    printf("Digite a 3a nota: ");
    scanf("%f", &aluno.nota3);
    printf("Digite a 4a nota: ");
    scanf("%f", &aluno.nota4);

    media = (aluno.nota1 + aluno.nota2 + aluno.nota3 + aluno.nota4)/4;
    printf("A media do Aluno %s: %.1f: ", aluno.nome, media);

}