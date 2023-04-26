#include <stdio.h>
#include <stdlib.h>

int main(){
    struct cadAluno{
        char nome[20];
        float nota[5];
    };
    struct cadAluno aluno;
    float media;

    printf("Informe o  nome do aluno: ");
    fgets(aluno.nome, 20, stdin);
    setbuf(stdin, NULL);

    for(int i = 0; i < 4; i++) {
        printf("Digite a %da nota: ", i+1);
        scanf("%f", &aluno.nota[i]);
        media = (media + aluno.nota[i]);
    }
    
    media = media/4;
    printf("A media do Aluno %s: %.1f: ", aluno.nome, media);

}