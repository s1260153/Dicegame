#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int a,b;

  srand(time(NULL));
  a = rand() % 6 + 1;
  b = rand() % 6 + 1;


  printf("Rooling the dice... \n");

  printf("Die 1: %d\n",a);
  printf("Die 2: %d\n",b);

  printf("Total value: %d\n", a+b);

  return 0;
}
