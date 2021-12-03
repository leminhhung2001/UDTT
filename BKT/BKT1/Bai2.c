<<<<<<< HEAD
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

float f(float x)
{
  if (x == 0)
  {
    printf("le minh hung");
    return cos(x);
  }
  else if (x < 0)
    return x;
  else
    return f(x - M_PI) + f(x - (M_PI / 2));
}
int main()
{
  // float p;
  // printf("Nhap p =  ");
  // scanf("%f", &p);
  float ans = f(3 * M_PI / 2);
  printf("f = %f", ans);
=======
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

float f(float x)
{
  if (x == 0)
  {
    printf("le minh hung");
    return cos(x);
  }
  else if (x < 0)
    return x;
  else
    return f(x - M_PI) + f(x - (M_PI / 2));
}
int main()
{
  // float p;
  // printf("Nhap p =  ");
  // scanf("%f", &p);
  float ans = f(3 * M_PI / 2);
  printf("f = %f", ans);
>>>>>>> f610a8418348fa1a7ab9d620ae00a7523a508128
}