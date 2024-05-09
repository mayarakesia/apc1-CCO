//Faça um programa em C que calcule o valor do desconto sobre um valor bruto lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.0 aplica 10%


#include <stdio.h>

int main(){
float valor_bruto;
  float valor_desconto;

  printf("Entre com o valor bruto: ");
  int deu_certo = scanf("%f", &valor_bruto);

  if(deu_certo && valor_bruto >= 0.0f) {
    if(valor_bruto <= 100.0f) {
      valor_desconto = valor_bruto * 0.01f;
    } else if (valor_bruto <= 500.0f) {
      valor_desconto = valor_bruto * 0.05f;
    } else {
      valor_desconto = valor_bruto * 0.1f;
    }

  printf("O valor do desconto eh %.2f\n", valor_desconto);
  } else {
    printf("Valor inválido. Tente novamente\n");
  }

  


  return 0;
}