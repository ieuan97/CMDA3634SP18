#include <stdio.h>
int main() {

  int n1;
  int n2;
  int gcd;
  printf("Enter two integers: ");
  scanf("%d %d",&n1, &n2);


  for (int i = 1;i<=n1 && i <= n2;i++) {
    if (n1%i==0 && n2%i == 0) {
      gcd = i;
    }
  }
  if (gcd == 1) {
    printf("%d and %d are coprime", n1, n2);
  }
  else {
    printf("%d and %d are not coprime", n1, n2);
  }
  return gcd;

}





