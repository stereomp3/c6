#include <stdio.h>

int main()
{
  int i;
  i = 0;
  do {
    i = i + 1;
  } while (i < 10);
  printf("i=%d\n", i);
  return 0;
}