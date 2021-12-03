#include <stdio.h>

int k = 0;
int deQuy(int n, char a, char b, char c)
{
  if (n == 1)
  {
    printf("%c --> %c\n", a, c);
    k++;
    return 1;
  }
  else
  {
    deQuy(n - 1, a, c, b);
    deQuy(1, a, b, c);
    deQuy(n - 1, b, a, c);
  }
}

int main()
{
  int n = 4;
  deQuy(n, 'a', 'b', 'c');
  printf("%d", k);
}