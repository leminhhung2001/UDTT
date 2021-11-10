#include <stdio.h>
#include <stdlib.h>

long long int chuyenSangNhiPhan(int n)
{
  long b;
  if (n == 0)
    return 0;
  else
  {
    b = n % 2;
    return chuyenSangNhiPhan(n / 2) * 10 + b;
  }
}
// int chuSoMax(int n)
// {
//     if(n<10) return n;
//     else {
//         return ((n%10)> chuSoMax(n/10)) ? (n%10) : chuSoMax(n/10);
//     }
// }
int main()
{
  int n;
  printf("Nhap n: ");
  scanf("%d", &n);
  printf("\nChuyen n sang he nhi phan ta duoc: %lld", chuyenSangNhiPhan(n));
  // printf("\nChu so lon nhat: %d",chuSoMax(n));
  return 0;
}
