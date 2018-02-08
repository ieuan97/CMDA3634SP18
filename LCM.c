#include <stdio>

int main() {

  int a;
  int b;
  int lcm;
  int gcd;
  printf("Enter two integers: ");
  scanf("%d %d", &n1, &n2);
  
  gcd = gcd();
  lcm = a*b/(gcd);
}
int gcd(n1, n2) {

  int n1;
  int n2;
  int gcd;



  for (int i = 1;i<=n1 && i <= n2;i++) {
    if (n1%i==0 && n2%i == 0) {
      gcd = i;
    }
  }

  return gcd;
}

