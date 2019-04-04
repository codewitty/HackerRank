#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int n;
  int u = 0;
  scanf("%d", &n);
  while (n >= 10) {
    u += n % 10;
    n = n / 10;
  }
  u = u + n;
  printf("%d", u);
  // Complete the code to calculate the sum of the five digits on n.
  return 0;

}
