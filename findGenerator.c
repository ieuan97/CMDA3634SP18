#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void main() {
  int prime;
  int gen = 2;
  int count = 1;
  printf("Enter a prime number: ");
  scanf("%d",&prime);
  while (count < prime - 1)  {
    int y = pow(gen, count);
    if (y%prime == 1) {
      gen++;
      count == 0;
    }
    else {
      count++;
    }
    if (count == prime - 1) {
      printf("%d is a generator for Z_%d",gen,prime);
    }
  
  }
}
