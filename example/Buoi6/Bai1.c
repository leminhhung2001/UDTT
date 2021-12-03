<<<<<<< HEAD
#include <stdio.h>
#define MAX 1000

int a[MAX], i = 0;
void deQuy(int n)
{
  if (n == 0)
    return;
  else
  {
    a[i] = n % 2;
    i++;
    return deQuy(n / 2);
  }
}

int main()
{
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  deQuy(n);
  for (int k = i - 1; k >= 0; k--)
  {
    printf("%d", a[k]);
  }
=======
#include <stdio.h>
#define MAX 1000

int a[MAX], i = 0;
void deQuy(int n)
{
  if (n == 0)
    return;
  else
  {
    a[i] = n % 2;
    i++;
    return deQuy(n / 2);
  }
}

int main()
{
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  deQuy(n);
  for (int k = i - 1; k >= 0; k--)
  {
    printf("%d", a[k]);
  }
>>>>>>> f610a8418348fa1a7ab9d620ae00a7523a508128
}