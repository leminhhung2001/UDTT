#include <stdio.h>
#include <math.h>

int deQuy(int n)
{
  if (n < 10)
  {
    return 1;
  }
  else
  {
    return 1 + deQuy(n / 10);
  }
}

int main()
{
  int n;
  printf("Nhap n: ");
  scanf("%d", &n);
  int s = deQuy(n);
  printf("s = %d", s);
}