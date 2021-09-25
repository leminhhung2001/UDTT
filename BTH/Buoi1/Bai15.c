#include <stdio.h>

int deQuy(int n)
{
  if (n == 1)
  {
    return 1;
  }
  else
    return n + deQuy(n - 1);
}

int main()
{
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  float s = 0;
  for (int i = 1; i <= n; i++)
  {
    s += 1.0 / deQuy(i);
  }
  printf("Tong day so s = %f", s);
}