#include <stdio.h>

int main(){
  int avaliacao;

  printf("Entre com a avaliacao de 1 a 5: ");
  int deu_certo = scanf("%i", &avaliacao);


  switch(avaliacao) {
    case 1: printf("O motorista ganhou *\n"); break;
    case 2: printf("O motorista ganhou **\n"); break;
    case 3: printf("O motorista ganhou ***\n"); break;
    case 4: printf("O motorista ganhou ****\n"); break;
    case 5: printf("O motorista ganhou *****\n"); break;
    default: printf("Avaliacao invalida. tente novamente.\n");
  }


  return 0;
}


  