/*ATIVIDADE►Atividade 3
►Faça  um  programa  em  C  que  declare  dois  vetores  de números  reais  com  20  elementos  cada.  Esses  elementos devem ser gerados aleatoriamente. 
►Crie  um  novo  vetor  que  seja  a  intersecção  entre  os  2 vetores  anteriores,  ou  seja,  que  terá  em  apenas  os números que estão em ambos os vetores. 
►Não deve conter números repetidos*/

#include <stdio.h>
#include <stdlib.h> 

int main(){
    float vetor_um[20];
    float vetor_dois[20];
    float interseccao[20];
    float temp = 0;
    int cont = 0;

    for(int i = 0; i < 20; i++){
        vetor_um[i] = ((float)((rand()%100)+2) / ((float) (rand()%5)+1));
        vetor_dois[i] = ((float)((rand()%100)+2) / ((float) (rand()%5)+1));
    } 
    


    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            if(vetor_um[i] == vetor_dois[j]){
                
                for(int k = 0; k < 20; k++){
                    if(vetor_um[i] != interseccao[k] && (k == 19)){
                        interseccao[cont] = vetor_dois[j];
                        cont++;
                    }
                    else{
                        if(vetor_um[i] == interseccao[k]){
                            k = 19;
                        }
                    }
                
            }
            }       
        }
        }
      

    printf("vetor um:\n");
    for(int i = 0; i < 20; i++){
        printf(" [%f]", vetor_um[i]);
       
    }
    printf("\nvetor dois:\n");
    for(int i = 0; i < 20; i++){
        printf(" [%f]", vetor_dois[i]);
       
    }
    printf("\nInterseccao:\n ");
    for(int i = 0; i < cont; i++){
        printf(" \n%f", interseccao[i]);
       
    }


    return 0;

}
//intersecção == elementos comuns
