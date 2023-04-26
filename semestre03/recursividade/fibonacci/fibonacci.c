/*Dado uma posição: retorne seu valor na sequência fibonacci*/
#include <stdio.h>
int ibr(int n){

    if(n <=2){
            return 1;
        }
        
    return ibr(n-1) + ibr(n-2);
}

int main(){
    printf("%d\n", ibr(7));
} 

