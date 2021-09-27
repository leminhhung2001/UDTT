#include <stdio.h>
#include <math.h>

float deQuy(int n, int x)
{
  if (x == n)
  {
    return sqrt(n);
  }
  else
  {
    return sqrt(x + deQuy(n, x + 1));
  }
}

int main()
{
  int n;
  printf("Nhap n: ");
  scanf("%d", &n);
  float s = deQuy(n, 1);
  printf("s = %f", s);
}