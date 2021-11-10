#include <stdio.h>
#define MAX 31

int x[MAX], t[MAX], n;
void printSolution(int k)
{
  printf("\n%d = ", n);
  for (int i = 1; i < k; i++)
    printf(" %d + ", x[i]);
  printf(" %d", x[k]);
}
void TRY(int k)
{
  for (int i = x[k - 1]; i <= ((n - t[k - 1]) / 2); i++)
  {
    x[k] = i;
    t[k] = t[k - 1] + i;
    TRY(k + 1);
  }
  x[k] = n - t[k - 1];
  printSolution(k);
}
int main()
{
  printf("Input n = ");
  scanf("%d", &n);
  x[0] = 1;
  t[0] = 0;
  TRY(1);
}