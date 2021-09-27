#include <stdio.h>
#include <math.h>

int deQuy(int n, int k)
{
  if (n < 10)
  {
    return n;
  }
  else
    return deQuy(n / 10, k);
}

int main()
{
  int n, k = 0;
  printf("Nhap n: ");
  scanf("%d", &n);
  int s = deQuy(n, k);
  printf("s = %d", s);
}