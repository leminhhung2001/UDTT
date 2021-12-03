#include <stdio.h>

#define MAX 100
int x[MAX] = {0}, k, n;

int Result()
{
  for (int i = 1; i <= k; i++)
  {
    // printf("%d\t", x[i]);
    switch (x[i])
    {
    case 1:
      printf("tam\t");
      break;
    case 2:
      printf("toan\t");
      break;
    case 3:
      printf("trang\t");
      break;
    case 4:
      printf("cong\t");
      break;
    case 5:
      printf("trung\t");
      break;
    case 6:
      printf("tu\t");
      break;
    default:
      break;
    }
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
      Result();
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
  printf("Input n, k:");
  scanf("%d%d", &n, &k);
  TRY(1);
}