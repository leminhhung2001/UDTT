#include <stdio.h>
#include <math.h>

float deQuy(int n)
{
  if (n == 1)
  {
    return sqrt(2);
  }
  else
  {
    return sqrt(2 + deQuy(n - 1));
  }
}

int main()
{
  int n;
  printf("Nhap n: ");
  scanf("%d", &n);
  float s = deQuy(n);
  printf("s = %f", s);
}