#include <stdio.h>
#define MAX 100
int x[MAX] = {0};

// Sinh ra cấu hình mới từ cấu hình đã có
void next_config(int k, int i)
{
  x[i] += 1;
  i++;
  while (i <= k)
  {
    x[i] = x[i - 1] + 1;
    i++;
  }
}

// Hiển thị một câú hình
void view_config(int k)
{
  for (int i = 1; i <= k; i++)
    printf("%d\t", x[i]);
  printf("\n");
}

// Liệt kê các cấu hình
void listing_configs(int k, int n)
{
  int i;
  for (int i = 1; i <= k; i++)
  {
    x[i] = i;
  }

  do
  {
    view_config(k);

    // Khởi tạo i để tìm phần tử đầu tiên chưa đạt giới hạn trên
    i = k;
    while (i > 0 && x[i] == n - k + i)
      i--;
    if (i > 0)
    {
      next_config(k, i);
    }
  } while (i > 0);
}

int main()
{
  int n, k;
  printf("input n, k: ");
  scanf("%d%d", &n, &k);
  listing_configs(k, n);
}