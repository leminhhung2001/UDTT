#include <stdio.h>
#include <math.h>

int deQuy(int n, int p)
{
  if (n < 10 && n % 10 >= p)
  {
    return n;
  }
  else if (n < 10 && n % 10 <= p)
  {
    return p;
  }
  else if (n % 10 >= p)
  {
    return deQuy(n / 10, n % 10);
  }
  else
  {
    return deQuy(n / 10, p);
  }
}

int main()
{
  int n;
  printf("Nhap n: ");
  scanf("%d", &n);
  int s = deQuy(n, 1);
  printf("s = %d", s);
}