/*Dado um número, calcule o fatorial*/
#include  <stdio.h>

int fatorial(int n){

    if (n == 1 || n == 0){
        return 1;
    }
    else{
       
        return n*fatorial(n-1);
    }
}

int main(){

    //fatorial(5);

    printf("%d\n", fatorial(6));
    return 0;
}