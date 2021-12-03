<<<<<<< HEAD
#include <stdio.h>
#include <conio.h>

#define MAX 30
int m, n, a[MAX];

void swap(int *a, int *b)
{
  int tg = *a;
  *a = *b;
  *b = tg;
}

int main()
{
  int ans = 0;
  // Đọc file
  FILE *f;
  if ((f = fopen("data.txt", "r")) == NULL)
  {
    printf("Khong doc duoc file");
    return 0;
  }

  fscanf(f, "%d", &n);
  fscanf(f, "%d", &m);
  for (int i = 1; i <= m; i++)
  {
    fscanf(f, "%d", &a[i]);
  }

  for (int i = 1; i < m; i++)
  {
    for (int j = m; j > i; j--)
    {
      if (a[j] < a[j - 1])
        swap(&a[j], &a[j - 1]);
    }
  }
  for (int i = 1; i <= m; i++)
  {
    if (n - a[i] > 0)
    {
      ans++;
      n -= a[i];
    }
  }

  fclose(f);
  printf("%d", ans);
=======
#include <stdio.h>
#include <conio.h>

#define MAX 30
int m, n, a[MAX];

void swap(int *a, int *b)
{
  int tg = *a;
  *a = *b;
  *b = tg;
}

int main()
{
  int ans = 0;
  // Đọc file
  FILE *f;
  if ((f = fopen("data.txt", "r")) == NULL)
  {
    printf("Khong doc duoc file");
    return 0;
  }

  fscanf(f, "%d", &n);
  fscanf(f, "%d", &m);
  for (int i = 1; i <= m; i++)
  {
    fscanf(f, "%d", &a[i]);
  }

  for (int i = 1; i < m; i++)
  {
    for (int j = m; j > i; j--)
    {
      if (a[j] < a[j - 1])
        swap(&a[j], &a[j - 1]);
    }
  }
  for (int i = 1; i <= m; i++)
  {
    if (n - a[i] > 0)
    {
      ans++;
      n -= a[i];
    }
  }

  fclose(f);
  printf("%d", ans);
>>>>>>> f610a8418348fa1a7ab9d620ae00a7523a508128
}