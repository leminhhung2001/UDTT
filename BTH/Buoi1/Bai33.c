#include <stdio.h>
#include <math.h>

int demChuSo(int n)
{
  if (n < 10)
  {
    return 1;
  }
  else
  {
    return 1 + demChuSo(n / 10);
  }
}

int deQuy(int n, int k)
{
  if (n < 10)
  {
    if (n % 2 == 0)
      return k;
    else
      return k + 1;
  }
  else if (n > 10)
  {
    if (n % 2 == 0)
      return deQuy(n / 10, k);
    else
      return deQuy(n / 10, k + 1);
  }
}

int main()
{
  int n, k;
  printf("Nhap n: ");
  scanf("%d", &n);
  k = demChuSo(n);
  int s = deQuy(n, 0);
  if (s == k)
  {
    printf("Chu so toan le");
  }
  else
    printf("Chu so binh thuong");
}