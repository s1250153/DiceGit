#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int res,x,y;

  /*char name[100];
  printf("What is your name?\n");
  printf("> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
*/
  srand(time(NULL));

  x = rand() % 6 + 1;
  y = rand() % 6 + 1;

  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",x);
  printf("Die 1: %d\n",y);
  res = x + y;
  printf("Total value: %d\n",res);

  if(res>=7) printf("You won!\n");
  else {
    printf("You lost.\n");
  }

  return 0;

}
