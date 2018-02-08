#include <stdio.h>

int main() {
  int n1;
  int count = 0;
  printf("pick a number: ");
  scanf("%d", &n1);
  for (int i = 2;i <= n1;i++) {
    if (n1%i == 0) {
      count++;
    }
  }
  if (count == 1) {
    printf("%d is a prime number", n1);
  }
  else {
    printf("%d is not a prime number %d", n1, count);
  }
  return count;
}
