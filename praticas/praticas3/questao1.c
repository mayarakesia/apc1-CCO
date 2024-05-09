// Faça um programa em C que determine se um número inteiro lido é par ou ímpar.

#include <stdio.h>

main() {
  int num;

  printf("Entre com o numero inteiro: ", num);
  int deu_certo = scanf("%d", &num);

  if (deu_certo) {
    int numero_eh_divisivel_por_2 = num % 2 == 0;
    if (numero_eh_divisivel_por_2) {
      printf("O numero %i eh par!\n", num);
    } else {
      printf("O numero %i eh impar!\n", num);
    }
  } else {
    printf("Numero invalido! Tente novamente\n");
  }

  return 0;
}