#include <stdio.h>
#include <stdlib.h>

int main(){
    struct cadAluno{
        char nome[20][10];
        float nota[5][5];
    };
    struct cadAluno aluno;
    float media[5];

    for(int i=0; i<4; i++){
        setbuf(stdin, NULL);
        printf("Informe o  nome do aluno: ");
        fgets(aluno.nome[i], 20, stdin);
    
        for(int j = 0; j < 4; j++) {
            printf("Digite a %da nota: ", j+1);
            scanf("%f", &aluno.nota[i][j]);
            media[i]= (media[i] + aluno.nota[i][j]);
        }
    }
    
   for(int i = 0; i< 4; i++) {
    media[i] = media[i]/4;
        for(int j = 0;j < 4; j ++){
            printf("--\n Aluno %s notas: %.1f \n media: %.1f ", aluno.nome[i], aluno.nota[i][j], media[i]);
        }
   }
    

}