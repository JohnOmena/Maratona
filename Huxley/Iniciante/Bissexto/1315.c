#include <stdio.h>
#include <stdlib.h>


int main(){

  int data;
  scanf("%d", &data);

  if(data % 2 == 0){
    printf("Bissexto\n");
  } else {
    printf("Nao bissexto\n");
  }

  return 0;
}
