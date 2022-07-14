#include <stdio.h>
#include <stdlib.h>

#define N 100
#define R 3

int main(){
  int i,head,tail;
  head = tail = 0;
  
  printf("Tossing a coin...\n");
  for( i=0; i<R; i++ ){
    printf("Round %d: ",i);
    if( rand()%2 == 0 ){
      printf("Heads\n");
      head++;
    }
    else{
      printf("Tails\n");
      tail++;
    }
  }
  printf("Heads: %d, Tails : %d\n",head,tail);
  
  return 0;
}