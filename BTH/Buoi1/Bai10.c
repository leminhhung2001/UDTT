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
  printf("Nhap n, x: ");
  scanf("%d %d", &x, &n);
  long long s = deQuy(x, n);
  printf("Tich day so s = %d", s);
}