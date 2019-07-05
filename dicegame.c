#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int a,b,c;
  char name[50];

  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n", name);


  srand(time(NULL));
  a = rand() % 6 + 1;
  b = rand() % 6 + 1;
  c = rand() % 6 + 1;


  printf("Rooling the dice... \n");

  printf("Die 1: %d\n",a);
  printf("Die 2: %d\n",b);
  printf("Die 3: %d\n",c);

  printf("Total value: %d\n", a+b+c);

  if(a+b+c > 15){
    printf("%s won!\n",name);
  }
  else{
    printf("%s lost!\n",name);
  }
  return 0;
}
