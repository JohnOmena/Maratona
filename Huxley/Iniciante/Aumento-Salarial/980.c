#include <stdlib.h>
#include <stdio.h>
#define desconto1 1.3
#define desconto2 1.1

void result(double salario){

  if(salario < 1000){
    printf("%.2lf\n", salario * desconto1);
  } else if (salario > 2000){
    printf("%.2lf\n", salario);
  } else {
    printf("%.2lf\n", salario * desconto2);
  }

}


int main(){

  double salario;
  scanf("%lf", &salario);

  result(salario);

  return 0;
}
