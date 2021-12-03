<<<<<<< HEAD
#include <stdio.h>
#define MAX 10

// bài toán chia đồng tiền {100, 25, 10, 5, 1}
int k[MAX] = {0};
int main()
{
  int n, ans = 0;
  printf("Input length of n = ");
  scanf("%d", &n);
  ans = n / 100;
  k[0] = ans;
  n = n % 100;

  ans = n / 25;
  k[1] = ans;
  n = n % 25;

  ans = n / 10;
  k[2] = ans;
  n = n % 10;

  ans = n / 5;
  k[3] = ans;
  n = n % 5;

  ans = n / 1;
  k[4] = ans;

  for (int i = 0; i < 5; i++)
  {
    printf("%4d", k[i]);
  }
=======
#include <stdio.h>
#define MAX 10

// bài toán chia đồng tiền {100, 25, 10, 5, 1}
int k[MAX] = {0};
int main()
{
  int n, ans = 0;
  printf("Input length of n = ");
  scanf("%d", &n);
  ans = n / 100;
  k[0] = ans;
  n = n % 100;

  ans = n / 25;
  k[1] = ans;
  n = n % 25;

  ans = n / 10;
  k[2] = ans;
  n = n % 10;

  ans = n / 5;
  k[3] = ans;
  n = n % 5;

  ans = n / 1;
  k[4] = ans;

  for (int i = 0; i < 5; i++)
  {
    printf("%4d", k[i]);
  }
>>>>>>> f610a8418348fa1a7ab9d620ae00a7523a508128
}