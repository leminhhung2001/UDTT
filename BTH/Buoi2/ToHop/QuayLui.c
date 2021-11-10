#include <stdio.h>

#define MAX 100
int x[MAX] = {0}, k, n;

int printSolution()
{
  for (int i = 1; i <= k; i++)
  {
    printf("%d\t", x[i]);
  }
  printf("\n");
}

int TRY(int i)
{
  for (int v = x[i - 1] + 1; v <= n - k + i; v++)
  {
    x[i] = v;
    if (i == k)
    {
      printSolution();
    }
    else
    {
      TRY(i + 1);
    }
  }
}

int main()
{
  x[0] = 0;
  printf("Nhap n, k:");
  scanf("%d%d", &n, &k);
  TRY(1);
}