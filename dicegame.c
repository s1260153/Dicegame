#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int a,b;
  char name[50];

  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n", name);


  srand(time(NULL));
  a = rand() % 6 + 1;
  b = rand() % 6 + 1;


  printf("Rooling the dice... \n");

  printf("Die 1: %d\n",a);
  printf("Die 2: %d\n",b);

  printf("Total value: %d\n", a+b);

  return 0;
}
