#include <stdio.h>
#include <math.h>

int demChuSo(int n)
{
  if (n < 10)
  {
    return 1;
  }
  else
  {
    return 1 + demChuSo(n / 10);
  }
}

int deQuy(int n, int k)
{
  if (n < 10)
  {
    return n;
  }
  else
    return (n % 10) * pow(10, k) + deQuy(n / 10, k - 1);
}

int main()
{
  int n, k;
  printf("Nhap n: ");
  scanf("%d", &n);
  k = demChuSo(n);
  int s = deQuy(n, k - 1);
  printf("s = %d", s);
}