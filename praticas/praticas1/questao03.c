//Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.

#include <stdio.h>

int main() {
 
  int raio = 5;
  float tamanho;
  float pi = 3.1416;
  float perimetro = 2 * pi * raio;

  printf("Entre com o tamanho da pizza %f\n", perimetro);
  int deu_certo = scanf("%f", &tamanho);

  printf("O perímetro da pizza é %f\n", perimetro);
  deu_certo = scanf("%f", &perimetro);

  printf("Resultado do perímetro da pizza é %f\n", perimetro);
  deu_certo = scanf("%f", &perimetro);
  
  return 0;
}