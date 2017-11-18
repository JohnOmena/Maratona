#include <stdio.h>
#include <stdlib.h>

// Como (n + 1)^2 – n^2 = n^2 + 2n + 1 – n^2 = 2n + 1, então:

void sumSquare(int impar){

  if(!impar) return;

  int N = (impar - 1) / 2;
  printf("%d - %d\n", N*N + 2*N + 1, N*N);

}


int main(){

  int impar;

  do {

    scanf("%d", &impar);
    sumSquare(impar);

  } while(impar);

  return 0;
}
