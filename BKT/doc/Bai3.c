#include <stdio.h>

#define MAX 30

int n = 6, m[MAX], x[MAX], cnt = 0;

void result()
{
  for (int i = 1; i <= n; i++)
  {
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
  cnt++;
  printf("%d\n", cnt);
}

void TRY(int i)
{
  for (int v = 1; v <= n; v++)
  {
    if (!m[v])
    {
      x[i] = v;
      m[v] = 1; //Đánh dấu điểm đã đi qua
      if (i == n)
      {
        result();
      }
      else
        TRY(i + 1);
      m[v] = 0;
    }
  }
}

int main()
{
  for (int v = 1; v <= n; v++)
  {
    m[v] = 0;
  }
  TRY(1);
}