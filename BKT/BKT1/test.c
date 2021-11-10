#include <stdio.h>
#include <math.h>
float pi = 3.14159;

float F(float x)
{
  if (x == 0)
  {
    printf("Le Minh Hung");
    return cos(x);
  }
  if (x < 0)
    return x;
  else
    return F(x - pi) + F(x - pi / 2);
}

int main()
{
  // printf("F(3Pi/2) = %f", F(3 * pi / 2));
  // float x;
  // printf("\n nhap x= ");
  // scanf("%f", &x);
  printf("F(%f) = %f", 3 * pi / 2, F(3 * pi / 2));
}