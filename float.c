#include<stdio.h>
#include<stdlib.h>

int main() {

  int values[5];
  printf("Enter 5 values: ");

  for(int i = 0; i < 5; ++i) {
     scanf("%d", &values[i]);
  }

  for(int i = 0; i < 5; ++i) {
     printf("The %d number student got %f\n", i, values[i]);
  }
  return 0;
}
