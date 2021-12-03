<<<<<<< HEAD
#include <stdio.h>
#define MAX 1000

int deQuy(int n, int k)
{
  int q = n % 10;
  if (n < 10)
  {
    if (k > q)
      return k;
    else
      return q;
  }
  else
  {
    if (q > k)
      return deQuy(n / 10, q);
    else
      return deQuy(n / 10, k);
  }
}

int main()
{
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  int ans = deQuy(n, 0);
  printf("%d", ans);
=======
#include <stdio.h>
#define MAX 1000

int deQuy(int n, int k)
{
  int q = n % 10;
  if (n < 10)
  {
    if (k > q)
      return k;
    else
      return q;
  }
  else
  {
    if (q > k)
      return deQuy(n / 10, q);
    else
      return deQuy(n / 10, k);
  }
}

int main()
{
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  int ans = deQuy(n, 0);
  printf("%d", ans);
>>>>>>> f610a8418348fa1a7ab9d620ae00a7523a508128
}