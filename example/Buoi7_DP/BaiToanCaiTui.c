#include <stdio.h>
#include <math.h>
#define MAX 100
int weight[MAX], value[MAX], n = 4, WW = 7;

int cmp(int a, int b)
{
  return a > b ? a : b;
}

int solution()
{
  int K[n + 1][WW + 1];
  for (int i = 0; i <= n; i++)
  {
    for (int w = 0; w <= WW; w++)
    {
      if (i == 0 || w == 0)
      {
        K[i][w] = 0;
      }
      else if (w < weight[i])
      {
        K[i][w] = K[i - 1][w];
      }
      else
      {
        K[i][w] = cmp(K[i - 1][w], value[i] + K[i - 1][w - weight[i]]);
      }
    }
  }
  return K[n][WW];
}

int main()
{
  for (int i = 1; i <= n; i++)
  {
    scanf("%d%d", &weight[i], &value[i]);
  }
  int ans = solution();
  printf("Ans = %d\n", ans);
}