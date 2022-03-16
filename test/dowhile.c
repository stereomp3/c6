#include <stdio.h>

int main()
{
  int i;
  i = 0;
  do {
    i = i + 1;
    printf("i=%d\t", i);
  } while (i < 10);
  
  return 0;
}