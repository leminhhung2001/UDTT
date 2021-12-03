#include <stdio.h>
int F[100][100], temp, w[100], n, m, v[100];

void solution()
{
  for (int j = 0; j <= m; j++)
    F[0][j] = 0;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j <= m; j++)
    {
      F[i][j] = F[i - 1][j]; //khong lay goi thu i
      temp = F[i - 1][j - w[i]] + v[i];
      // lay goi thu i
      if (w[i] <= j && F[i][j] < temp)
      {
        F[i][j] = temp;
      }
    }
  }
}

// Truy vết
int print()
{
  printf("Max value: %d\n", F[n][m]);
  int i = n, j = m;
  while (i != 0)
  {
    if (F[i][j] != F[i - 1][j])
    {
      printf("%2d", i);
      j = j - w[i]; //Lay goi thu i
    }
    i--;
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
    fscanf(f, "%d", &w[i]);
  }
  for (int i = 0; i < n; i++)
  {
    fscanf(f, "%d", &v[i]);
  }

  solution();
  print();
}