#include <stdio.h>
#define MAX 30

int a[MAX][MAX], dd[MAX][MAX] = {0}, n, ans = 0;

void loang(int i, int j)
{
  dd[i][j] = 1;
  if (a[i - 1][j] == a[i][j] && dd[i - 1][j] == 0 && i - 1 >= 0)
  {
    loang(i - 1, j);
  }
  if (a[i + 1][j] == a[i][j] && dd[i + 1][j] == 0 && i + 1 <= n - 1)
  {
    loang(i + 1, j);
  }
  if (a[i][j - 1] == a[i][j] && dd[i][j - 1] == 0 && j - 1 >= 0)
  {
    loang(i, j - 1);
  }
  if (a[i][j + 1] == a[i][j] && dd[i][j + 1] == 0 && j + 1 <= n - 1)
  {
    loang(i, j + 1);
  }
}

int main()
{
  // Đọc file
  FILE *f;
  if ((f = fopen("data.txt", "r")) == NULL)
  {
    printf("Khong doc duoc file");
    return 0;
  }
  fscanf(f, "%d", &n);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      fscanf(f, "%d", &a[i][j]);
    }
  }
  fclose(f);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (dd[i][j] == 0 && a[i][j] == 1)
      {
        ans++;
        loang(i, j);
      }
    }
  }
  printf("%d", ans);
}