#include <stdio.h>
#include <math.h>

long long deQuy(int n)
{
  if (n < 10)
  {
    if (n % 2 != 0)
      return n;
    else
      return 1;
  }
  else
  {
    int k = (n % 10);
    if (k % 2 != 0)
      return k * deQuy(n / 10);
    else
      return deQuy(n / 10);
  }
}

int main()
{
  long long n;
  printf("Nhap n: ");
  scanf("%d", &n);
  int s = deQuy(n);
  printf("s = %d", s);
}