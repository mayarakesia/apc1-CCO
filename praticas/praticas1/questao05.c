//Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).


#include <stdio.h>

int main(){
  double gigabytes;
  double bytes;
  
printf("Entre com o valor em gigabytes: ");
scanf("%lf", &gigabytes);

bytes = gigabytes * 1024 * 1024 * 1024;
printf("Resultado em bytes: %.0f\n", bytes);
  
return 0;
}