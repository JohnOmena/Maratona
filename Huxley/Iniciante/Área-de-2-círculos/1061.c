#include <stdlib.h>
#include <stdio.h>
#define pi 3.14

void result(double r1, double r2){

  if(r1 == r2){
    printf("Iguais\n");
  } else if (r1 > r2){
    printf("Primeiro circulo\n");
  } else {
    printf("Segundo circulo\n");
  }

}


int main(){

  double r1, r2;
  scanf("%lf %lf", &r1, &r2);

  result(r1,r2);

  return 0;
}
