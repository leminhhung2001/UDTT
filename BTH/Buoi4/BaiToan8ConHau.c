#include <stdio.h>

#define MAX 4
int x[MAX];
int n = MAX;

void printSolution()
{
  for (int i = 1; i <= n; i++)
  {
    printf("%3d", x[i]);
  }
  printf("\n");
}

int check(int v, int k)
{
  // kiểm tra xem v có thể gán được cho x[k]?
  // x[i] là hàng của con hậu xếp trên cột i
  for (int i = 1; i <= k - 1; i++)
  {
    if (x[i] == v)
      return 0;
    if (x[i] + i == v + k)
      return 0;
    if (x[i] - i == v - k)
      return 0;
  }
  return 1;
}

void TRY(int k)
{
  for (int v = 1; v <= n; v++)
  {
    if (check(v, k))
    {
      x[k] = v;
      printf("%d\t%d\n", v, k);
      if (k == n)
      {
        printSolution();
      }
      else
        TRY(k + 1);
    }
  }
}

int main()
{
  TRY(1);
}