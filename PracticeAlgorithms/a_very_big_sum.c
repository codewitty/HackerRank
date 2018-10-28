#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
  int num_count;
  scanf("%d\n", &num_count);

  char num_strg[4096];
  fgets(num_strg, 4095, stdin);

  char * num_str;

  long long sum = 0;
  char * endptr;

  num_str = strtok(num_strg, " ");
  long long check;
  for (int i = 0; i < num_count; i++, num_str = strtok(NULL, " ")){
    check = strtoll(num_str, &endptr, 10);
    sum += check;
  }
  printf("%lld\n", sum);

  return 0;
}
