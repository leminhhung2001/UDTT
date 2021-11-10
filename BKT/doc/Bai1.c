#include <stdio.h>

char a[10];
int check = 0, n;
void printSolution(int n, char a[])
{
  for (int i = 1; i <= n; i++)
  {
    printf("%c", a[i]);
  }
  printf("\n");
}

void nextConfig(int n, char a[])
{
  int i = n;
  while (a[i] == '1' && i > 0)
  {
    i--;
  }
  if (i == 0)
    check = 1;
  else
  {
    a[i] = '1';
    for (int j = i + 1; j <= n; j++)
    {
      a[j] = '0';
    }
  }
}
int main()
{
  printf("Input length of n = ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    a[i] = '0';
  }
  while (!check)
  {
    printSolution(n, a);
    nextConfig(n, a);
  }
}