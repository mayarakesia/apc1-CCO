#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao = 0;
  while (opcao != 4) {
    int deu_certo = system("clear");
    printf("MEU JOGO\n");
    printf("1 - Iniciar\n");
    printf("2 - Ver Ranking\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao => ");
    deu_certo = scanf("%i", &opcao);
     while (getchar() != '\n');
    if (!deu_certo) {
      opcao = 0;
    }

    switch (opcao) {
    case 1: {
      char nome[31];
      deu_certo = system("clear");
      printf("Qual o seu nome? ");
      deu_certo = scanf("%[^\n]s", nome);
      while (getchar() != '\n'); // limpar buffer do teclado
      printf("Olá %s!\n", nome);
      printf("pressione ENTER para continuar...");
      getchar();
      break;
    }
    case 2: {
      deu_certo = system("clear");
      printf("Ranking - top 5\n");
       printf("1o lugar: Mayara - 1000pts\n");
       printf("2o lugar: Maria - 800pts\n");
       printf("3o lugar: Bia - 700pts\n");
       printf("4o lugar: Pedro - 500pts\n");
      printf("5o lugar: Joao - 200pts\n");
      printf("pressione ENTER para voltar...");
      getchar();
      break;
    }
    case 3:
      break;
    case 4:
      printf("Ate logo!\n");
      break;
    default:
      printf("Opção inválida! Pressione enter para continuar...\n");
      while (getchar() != '\n')
        ; // limpar buffer no teclado
    }
  }
  return 0;
}