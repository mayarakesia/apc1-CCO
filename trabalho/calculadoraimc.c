
#include <stdio.h>

// dicionário, lista

int main() {
  char nome[50];
  int opcao;
  float peso, altura, imc;

  printf("Digite o seu primeiro nome: ");
  scanf("%s", nome);

  do {

    printf("Seja bem-vindo(a), %s\n", nome);
    printf("MENU PRINCIPAL\n");
    printf("1 - Calcular IMC\n");
    printf("2 - Sair\n");
    printf("Escolha uma opção => ");
    scanf("%i", &opcao);
  }

  switch (imc) {
  case 1:
    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf();
    break;

  default:
    printf("Avaliacao invalida. tente novamente.\n");
  }
  while (opcao != 2)
    ;

  return 0;
}
