#include <stdio.h>
#define MAX 2127483648
#define MIN -2127483648
int a[100], n, k, T[100], L[100], jmax;

void solution()
{
  a[0] = MIN;
  a[n + 1] = MAX;
  L[n + 1] = 1;
  for (int i = n; i >= 0; i--)
  {
    jmax = n + 1;
    for (int j = i + 1; j <= n + 1; j++)
      if (a[j] > a[i] && L[j] > L[jmax])
        jmax = j;
    L[i] = L[jmax] + 1;
    T[i] = jmax;
  }
}

// 10
// 0 1 2 3 4 5 6 7 8 9 10
// 5 2 3 4 9 10 5 6 7 8

// Truy vết
int print()
{
  k = T[0];
  printf("Day con: {");
  while (k != n + 1)
  {
    printf("%3d", a[k]);
    k = T[k];
  }
  printf("  }");
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
  for (int i = 1; i <= n; i++)
  {
    fscanf(f, "%d", &a[i]);
  }

  solution();
  print();
}