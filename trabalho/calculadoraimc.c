
#include <math.h>
#include <stdio.h>

int main() {
  float altura, peso;
  float imc_x;

  printf("Digite a sua altura: ");
  int deu_certo = scanf("%f", &altura);

  printf("Digite o seu peso: ");
  deu_certo = scanf("%f", &peso);

  imc_x = peso / (altura * altura);
  printf("O seu IMC é: %.2f\n", imc_x);

  if (imc_x < 17) {
    printf("Muito abaixo do peso.\n");
  } else {
    if (imc_x > 17 && imc_x < 18.49) {
      printf("Abaixo do peso.\n");
    } else {
      if (imc_x > 18.5 && imc_x < 24.99) {
        printf("Peso normal.\n");
      } else {
        if (imc_x > 25 && imc_x < 29.99) {
          printf("Acima do peso.\n");
        } else {
          if (imc_x > 30 && imc_x < 34.99) {
            printf("Obesidade.\n");
          } else {
            if (imc_x > 35 && imc_x < 39.99) {
              printf("Obesidade Severa.\n");
            } else {
              if (imc_x > 40) {
                printf("Obesidade Morbida.\n");
              }
            }
          }
        }
      }
    }
  }

  return 0;
}
