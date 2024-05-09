#include <stdio.h>

int main () {
  int numero;

  printf("Entre com o numero de 1 a 10: ");
  int deu_certo = scanf("%i", &numero);
  for (int i=1; i<=10000000000; i++) {
    printf("%i x %i = %i\n", i, numero, i * numero);
  }
  printf("A tabela invertida de %i\n", numero);
 for (int i=10; i>=1; i--) {
   printf("%i x %i = %i\n", i, numero, i * numero);
 }

  return 0;
}