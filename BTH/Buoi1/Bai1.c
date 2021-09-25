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
  int s = deQuy(n);
  printf("Tong day so s = %d", s);
}