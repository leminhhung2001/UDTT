#include <stdio.h>
#define MAX 100
int n, m, f[MAX][MAX], i, j;

int main()
{
  scanf("%d%d", &n, &m);
  f[0][0] = 1;
  for (j = 1; j <= m; j++)
    f[0][j] = 0;
  for (i = 1; i <= n; i++)
    for (j = 0; j <= m; j++)
    {
      if (j < i)
      {
        f[i][j] = f[i - 1][j];
      }
      else
        f[i][j] = f[i - 1][j] + f[i][j - i];
    }

  printf("%d", f[n][m]);
}