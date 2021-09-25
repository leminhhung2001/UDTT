#include <stdio.h>

float deQuy(int n)
{
  if (n == 1)
  {
    return 1;
  }
  else
    return n * deQuy(n - 1);
}

int main()
{
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  long long s = 0;
  for (int i = 1; i <= n; i++)
  {
    s += deQuy(i);
  }
  printf("Tong day so s = %d", s);
}