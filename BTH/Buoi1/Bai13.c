#include <stdio.h>

long long deQuy(int x, int n)
{
  if (n == 1)
  {
    return x;
  }
  else
    return x * deQuy(x, n - 1);
}

int main()
{
  int n, x;
  printf("Nhap x, n: ");
  scanf("%d %d", &x, &n);
  long long s = 0;
  for (int i = 1; i <= n; i++)
  {
    s += deQuy(x, 2 * i);
  }
  printf("Tich day so s = %d", s);
}