#include <stdio.h>
#include <stdlib.h>


void result(int pH){

  if(pH == 7){
    printf("Neutra\n");
  } else if(pH > 7) {
    printf("Basica\n");
  } else {
    printf("Acida\n");
  }

}

int main(){

  int pH;
  scanf("%d", &pH);

  result(pH);

  return 0;
}
