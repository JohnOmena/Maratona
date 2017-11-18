#include <stdlib.h>
#include <stdio.h>
#define diaria 30
#define perKM 0.01
#define desconto 0.90

int main(){

  int dias, km;
  double valor;

  scanf("%d %d", &dias, &km);

  valor = (dias*diaria + perKM * km) * desconto;

  printf("%.2lf\n", valor);

  return 0;
}
