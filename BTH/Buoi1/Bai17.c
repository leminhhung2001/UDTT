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

long long deQuy2(int n)
{
  if (n == 1)
  {
    return 1;
  }
  else
    return n * deQuy2(n - 1);
}

int main()
{
  int n, x;
  printf("Nhap x, n: ");
  scanf("%d %d", &x, &n);
  float s = 1;
  for (int i = 1; i <= n; i++)
  {
    s += 1.0 * deQuy(x, 2 * i) / deQuy2(2 * i);
  }
  printf("Tich day so s = %f", s);
}