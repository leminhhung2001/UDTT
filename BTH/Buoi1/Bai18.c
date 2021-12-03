#include <stdio.h>

int UocLeMax(int n)
{
  if (n % 2 == 1)
  {
    return n;
  }
  return UocLeMax(n / 2);
}

int main()
{
  int n, x;
  printf("Nhap n: ");
  scanf("%d", &n);
  int s = UocLeMax(n);
  printf("Uoc chung le lon nhat s = %d", s);
}