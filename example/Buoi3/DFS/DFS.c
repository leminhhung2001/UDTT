#include <stdio.h>
#include <conio.h>

#define MAX 30
int a[MAX][MAX], reach[MAX], n = 10;

void dfs(int v)
{
  reach[v] = 1;
  for (int i = 1; i <= n; i++)
  {
    if (a[v][i] && !reach[i])
    {
      printf("%d -> ", i);
      dfs(i);
    }
  }
}

int main()
{
  // Khởi tạo
  for (int i = 1; i <= n; i++)
  {
    reach[i] = 0;
    for (int j = 1; j <= n; j++)
      a[i][j] = 0;
  }

  // Đọc file
  FILE *f;
  if ((f = fopen("data.txt", "r")) == NULL)
  {
    printf("Khong doc duoc file");
    return 0;
  }

  // Đánh dấu những điểm có đường đi
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      fscanf(f, "%d", &a[i][j]);
    }
  }

  fclose(f);
  printf("1 -> ");
  dfs(1);
}