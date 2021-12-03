#include <stdio.h>

#define MAX 20
int x[MAX] = {0};

void swap(int *a, int *b)
{
  int tg = *a;
  *a = *b;
  *b = tg;
}

//Sinh cau hinh moi tu cau hinh dang co
void next_config(int x[], int n, int i)
{
  //Tim x[k] be nhat trong doan cuoi lớn hon x[i]
  int k = n;
  while (x[k] < x[i])
  {
    k--;
  }
  //Dao gia tri x[i] va x[k]
  swap(&x[i], &x[k]);
  //Dao nguoc doan cuoi
  int j = n;
  i++;
  while (i < j)
  {
    swap(&x[i], &x[j]);
    i++;
    j--;
  }
}

// Hiển thị một câú hình
void view_config(int x[], int n)
{
  for (int i = 1; i <= n; i++)
    printf("%d\t", x[i]);
  printf("\n");
}

//Liet ke cac cau hinh
void listing_configs(int n)
{
  int i;
  //Cau hinh dau tien {1 2 … n}
  for (i = 1; i <= n; i++)
  {
    x[i] = i;
  }
  do
  {
    view_config(x, n); //In một cấu hình
    //Tim phan tu lien truoc doan cuoi giam dan
    i = n - 1;
    while (i > 0 && x[i] > x[i + 1])
      i--;
    if (i > 0)
    { //Chua phai cau hinh cuoi
      next_config(x, n, i);
    }
  } while (i > 0);
}

int main()
{
  int n;
  printf("input n: ");
  scanf("%d", &n);
  listing_configs(n);
}