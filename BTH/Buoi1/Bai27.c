#include <stdio.h>
#include <math.h>

int deQuy(int n)
{
  if (n < 10)
  {
    if (n % 2 != 0)
      return 0;
    else
      return n;
  }
  else
  {
    int k = (n % 10);
    if (k % 2 == 0)
      return k + deQuy(n / 10);
    else
      return deQuy(n / 10);
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