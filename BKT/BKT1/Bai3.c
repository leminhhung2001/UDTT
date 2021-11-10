#include <stdio.h>
#include <math.h>

int UCLN(int p, int q)
{
  int r = p % q;
  if (r == 0)
    return q;
  else
  {
    return UCLN(q, r);
  }
}

int main()
{
  int p, q;
  printf("Nhap 2 so p, q: ");
  scanf("%d%d", &p, &q);
  printf("UCLN cua %d va %d la %d", p, q, UCLN(p, q));
}
