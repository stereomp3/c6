#include <stdio.h>

int main()
{
  int s;
  int i;
  i = 0;
  s = 1;
  do {
    s = i + s;
    i = i + 1;
    printf("do while: s=%d i=%d\n",s,i);
  } while(i < 10);
  return 0;
}