<<<<<<< HEAD
#include <stdio.h>
#define MAX 100
int n, a[MAX];

int main()
{
  scanf("%d", &n);
  a[1] = 1;
  a[2] = 1;
  for (int i = 3; i <= n; i++)
  {
    a[i] = a[i - 1] + a[i - 2];
  }
  printf("%d", a[n]);
=======
#include <stdio.h>
#define MAX 100
int n, a[MAX];

int main()
{
  scanf("%d", &n);
  a[1] = 1;
  a[2] = 1;
  for (int i = 3; i <= n; i++)
  {
    a[i] = a[i - 1] + a[i - 2];
  }
  printf("%d", a[n]);
>>>>>>> f610a8418348fa1a7ab9d620ae00a7523a508128
}