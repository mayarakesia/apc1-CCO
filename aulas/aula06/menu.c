#include <stdio.h>

int main(){
  int opcao;

  printf("MENU PRINCIPAL\n");
  printf("1 - Consultar saldo\n");
  printf("2 - Fazer Recarga\n");
  printf("3 - Listar recados\n");
  printf("4 - Ligações feitas\n");
  printf("0 - Sair\n");
  printf("Escolha uma opção => ");
  int deu_certo = scanf("%i", &opcao);

  switch(opcao) {
    case 1: printf("Seu saldo é de R$ 10.00\n"); break;
    case 2: {
      float valor;
      printf("Entre com o valor da recarga: ");
      deu_certo = scanf("%f", &valor);
      break;}
    case 3: printf("Você não tem recados!\n"); break;
    case 4:    
      printf("61 9999-9999\n");
      printf("61 8888-8888\n");
      printf("61 8888-8888\n");
      printf("61 9999-9999\n");
      break;
    case 0:
      printf("Até logo\n"); break;
    default:
      printf("Opcao invalida. Tente novamente!");
    
  }

  
  return 0;
}