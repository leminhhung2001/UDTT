#include <stdio.h>

int Acker(int m, int n)
{
  if (m == 0)
    return n + 1;
  else if (n == 0)
    return Acker(m - 1, 1);
  else
    Acker(m - 1, Acker(m, n - 1));
}
int main()
{
  int p, q;
  printf("Nhap 2 so p, q: ");
  scanf("%d%d", &p, &q);
  int ans = Acker(p, q);
  printf("Acker = %d", ans);
}