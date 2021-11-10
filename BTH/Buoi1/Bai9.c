#include <stdio.h>

long long deQuy(int n)
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
  long long s = deQuy(n);
  printf("Tich day so s = %d", s);
}