#include <stdio.h>
#include <stdlib.h>

int main() {
  int numero, chute, numero_adivinhacao, tentativas;
  numero = 0;
  chute = 0;
  numero_adivinhacao = rand() % 100;
  tentativas = 0;

  printf("Adivinhe o numero: ");
  scanf("%d", &chute);

  while (numero <= 5) {
    numero = numero + 1;
    tentativas = tentativas + 1;

    if (chute == numero_adivinhacao) {
      printf("\n Voce acertou!");
      break;
    } else {
      if (chute > numero_adivinhacao) {
        printf("\n Seu numero eh maior que o numero secreto");
      } else {
        printf("\n Seu numero eh menor que o numero secreto");
      }
      if (numero == 5) {
        printf("\n Voce errou!!");
        break;
      } else {
        printf("\n Tente novamente: ");
        scanf("%d", &chute);
      }
    }
  }

  printf("\n Numero de tentativas: %d", tentativas);
  printf("\n O numero secreto era: %d", numero_adivinhacao);
  printf("\n");

  system("pause");
  return 0;
}

/*Dar 5 chances para o usuário adivinhar qual o número armazenado numa variável.
Para cada digitação do usuário informar se o número que ele digitou é maior ou
menor que o número armazenado. Quando ele acertar, informar que ele acertou e o
número de vezes que tentou. Se ele errou, dar mensagem apropriada.*/