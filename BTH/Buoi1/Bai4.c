#include <stdio.h>

float deQuy(int n)
{
  if (n == 1)
  {
    return 1.0 * 1 / 2;
  }
  else
    return 1.0 * 1 / (2 * n) + deQuy(n - 1);
}

int main()
{
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  float s = deQuy(n);
  printf("Tong day so s = %f", s);
}