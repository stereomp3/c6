#include <stdio.h>

int main()
{
  int i=1;
  do {
    i = i + 1;
  } while (i < 10);
  printf("i=%d\n", i);
  return 0;
}