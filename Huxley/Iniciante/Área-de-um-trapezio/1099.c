#include <stdio.h>
#include <stdlib.h>

void result(double baseMenor, double baseMaior, double altura){

  printf("%.1lf", ((baseMenor + baseMaior) * altura ) / 2);

}

int main(){

  double baseMenor, baseMaior, altura;
  scanf("%lf %lf %lf", &baseMenor, &baseMaior, &altura);

  result(baseMenor, baseMaior, altura);

  return 0;
}
