#include <stdio.h>
#include <stdlib.h>

int main() {

    int i,j,m,n;
    int alunoLinha = 0;
    int alunoTotal = 0;
    int alunoCodigo;
    int disciplinaCodigo;
    int invalidoCodigo = 0;
    int alunoz;


    int notas[8][5] = {
                    {3, 0, 2, 4, 1},      
                    {0, 0, 0, 0, 1},
                    {2, 3, 3, 2, 3},
                    {0, 2, 2, 3, 3},
                    {0, 0, 0, 0, 0},
                    {2, 2, 3, 2, 2},
                    {0, 2, 0, 0, 0},
                    {0, 0, 0, 0, 0}};

    int idade_aluno[7];

    for(j = 0; j < 8; j++){
        printf("\n Informe a idade do aluno %d: ", j+1);
        scanf("%d", &idade_aluno[j]);
        fflush(stdin);
    }

    for(i = 0; i < 8; i++) {

    alunoLinha = 0;

        if (idade_aluno[i] > 18 && idade_aluno[i] < 25) {
        
            for (n = 0; n < 5; n++){        

                if (notas[i][n] > 2) {
                    
                    alunoLinha = alunoLinha + 1 ;        

                }
            
            }

            if (alunoLinha > 1) {

            alunoTotal = alunoTotal + 1;                

            }
        
        }

    }
    
    printf("\n\nQuantidade de alunos com idade entre 18 a 25 anos, que fizeram mais de duas provas em mais de uma disciplina foram %d.", alunoTotal);
    printf("\n=======================================\n");

    printf("\nInforme o codigo da disciplina do aluno(codigos validos: 1,2,3,4,5): ");
    scanf("%d", &disciplinaCodigo);
    disciplinaCodigo = disciplinaCodigo - 1;


    printf("\nInforme o codigo do aluno (codigos validos: 1,2,3,4,5,6,7,8): ");
    scanf("%d", &alunoCodigo); 
    alunoCodigo = alunoCodigo - 1;

    if (disciplinaCodigo > 5 || alunoCodigo > 8) {
        invalidoCodigo = 1 ;
    }

    if (invalidoCodigo == 1) {

        printf("\nNao foi possivel exibir a quantidade de provas");
        printf("\n=======================================\n");

    } else {
        
        printf("\n\nEste aluno participou de %d prova(s)", notas[alunoCodigo][disciplinaCodigo]);
        printf("\n=======================================\n");

    }

    for (i = 0; i < 8; i++) {

        alunoz = 0 ;

        for (n = 0; n < 5; n++){

            if (notas[i][n] < 3){

                alunoz++;

                if (alunoz == 5) {

                    i = i + 1;
                    
                    printf("\n\n O aluno de codigo %d, teve participacao de menos de 3 provas em todas as disciplinas.",i);

                }

            }

        }
        

    }
        printf("\n");
        system("pause");
        return 0; 
}