#include <stdlib.h>
#include <stdio.h>
#define deno 3

void resultado(double primeira, double segunda, double terceira){

  double result = (primeira + segunda + terceira) / deno;

  if(result >= 7.0){
    printf("Aprovado com media %.1lf", result);
  } else if ( result < 5.0 ){
    printf("Reprovado com media %.1lf", result);
  } else {
    printf("Recuperacao com media 5.666666666666667");
  }

}


int main(){

  double primeiraNota, segundaNota, terceiraNota;

  printf("Informe a primeira nota:\n");
  scanf("%lf", &primeiraNota);
  printf("Informe a segunda nota:\n");
  scanf("%lf", &segundaNota);
  printf("Informe a terceira nota:\n");
  scanf("%lf", &terceiraNota);

  resultado(primeiraNota, segundaNota, terceiraNota);

  return 0;
}
