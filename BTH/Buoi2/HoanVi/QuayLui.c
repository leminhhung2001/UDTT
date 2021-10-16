#include <stdio.h>

#define MAX 30

int n = 4, mark[MAX], x[MAX], ans = 0;

void printSolution()
{
  ans++;
  for (int i = 1; i <= n; i++)
  {
    printf("%3d", x[i]);
  }
  printf("\n");
}

void TRY(int i)
{
  for (int v = 1; v <= n; v++)
  {
    if (!mark[v])
    {
      x[i] = v;    //Gán giá trị
      mark[v] = 1; //Đánh dấu điểm đã đi qua
      if (i == n)
      {
        printSolution();
      }
      else
        TRY(i + 1);
      mark[v] = 0;
    }
  }
}

int main()
{
  for (int v = 1; v <= n; v++)
  {
    mark[v] = 0;
  }
  TRY(1);
  printf("So hoan vi la k = %d", ans);
}