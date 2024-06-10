#include <stdio.h>
#include <stdlib.h>
#define ANSI_COLOR_GREEN "\033[0;32m"
#define ANSI_COLOR_RESET "\033[0m"

int deu_certo = 0;

int main() {
  int opcao;
  float peso, altura, imc;
  char buffer[100];

  do {
    printf("\n" ANSI_COLOR_GREEN "MENU PRINCIPAL\n" ANSI_COLOR_RESET);
    printf("1. Calcular IMC\n");
    printf("2. Informacoes sobre IMC\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");

    if (scanf("%d", &opcao) != 1) {
      printf("Opcao invalida! Tente novamente.\n");
      deu_certo = scanf("%s", buffer);
      continue;
    }

    switch (opcao) {
    case 1:
      printf("\n------------------------------\n");
      printf("\nCalculadora de IMC\n");
      printf("Insira o peso (em kg): ");
      if (scanf("%f", &peso) != 1) {
        printf("Entrada invalida! Por favor, insira um numero.\n");
        deu_certo = scanf("%s", buffer);
        continue;
      }
      printf("Insira a altura (em metros): ");
      if (scanf("%f", &altura) != 1) {
        printf("Entrada invalida! Por favor, insira um numero.\n");
        deu_certo = scanf("%s", buffer);
        continue;
      }

      imc = peso / (altura * altura);

      printf("Seu IMC e: %.2f\n", imc);

      if (imc < 18.5) {
        printf("Abaixo do peso\n");
        printf("\n------------------------------\n");
      } else if (imc < 25) {
        printf("Peso ideal\n");
        printf("\n------------------------------\n");
      } else if (imc < 30) {
        printf("Sobrepeso\n");
        printf("\n------------------------------\n");
      } else if (imc < 35) {
        printf("Obesidade I\n");
        printf("\n------------------------------\n");
      } else if (imc < 40) {
        printf("Obesidade II (SEVERA)\n");
        printf("\n------------------------------\n");
      } else {
        printf("Obesidade III (MÓRBIDA)\n");
        printf("\n------------------------------\n");
      }
      break;

    case 2:
      printf("\n------------------------------\n");
      printf("\nRESULTADO:\n");
      printf("IMC < 18.5: Abaixo do peso\n");
      printf("18.5 <= IMC < 25: Peso normal\n");
      printf("25 <= IMC < 30: Sobrepeso\n");
      printf("30 <= IMC < 35: Obesidade I\n");
      printf("35 <= IMC < 40: Obesidade II (SEVERA)\n");
      printf("IMC < 40: Obesidade III (MÓRBIDA)\n");
      printf("\n------------------------------\n");
      break;

    case 3:
      printf("\nSaindo do programa. Ate a proxima!\n");
      break;

    default:
      printf("\nInvalido! Tente novamente.\n");
    }
  } while (opcao != 3);

  return 0;
}