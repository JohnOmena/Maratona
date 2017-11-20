#include <stdio.h>
#include <stdlib.h>
#define desconto1 1.2
#define desconto2 1.15
#define desconto3 1.1
#define desconto1 1.05

void result(double* salario){

  printf("Salario antes do reajuste: %lf\n", salario);
  if(salario <= 280){
    printf("Percentual de aumento aplicado: 20%", );
  }

}

int main(){

  double salario;
  printf("Informe o salario do colaborador:");
  scanf("%lf", &salario);

  result(&salario);

  return 0;
}
