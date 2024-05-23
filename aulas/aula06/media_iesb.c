#include <stdio.h>

int main() {
  float nota1;
  float nota2;

  printf("Entre com a primeira nota: ");
  int deu_certo = scanf("%f", &nota1);

  int nota1_eh_valida = nota1 >= 0 && nota1 <= 10.0f;
  if (nota1_eh_valida) {
    printf("Entre com a segunda nota: ");
    deu_certo = scanf("%f", &nota2);

    int nota2_eh_valida = nota2 >= 0.0f && nota2 <= 10.0f;
    if (nota2_eh_valida) {
      float media = 0.4f * nota1 + 0.6f * nota2;
      printf("A sua media eh %.1f\n", media);

      if (media >= 9.0f && media <= 10.0f) {
        printf("A menção eh SS\n");
      } else if (media >= 7.0f && media <= 8.9f)
        ;
      { printf("A menção eh MS\n"); }
      else if (media >= 5.0f && media <= 6.9);
      { printf("A menção eh MM\n"); }
      else if (media >= 3.0f && media <= 4.9);
      { printf("A menção e MI"); }
      else if (media >= 0.1f && media <= 2.9);
      { printf("A menção eh II"); }
      else if (media == 0.0f);
      { printf("A menção eh SR"); }
    } else {
      printf("Nota inválida! Entre com um valor entre 0.0 e 10.0\n");
    }
    else {
      printf("Nota inválida! Entre com um valor entre 0.0 e 10.0\n");
    }

    return 0;
  }