#include <stdio.h>

void input(float*base, float*height)
{
  printf("Enter the values of base and height:  ");
  scanf("%f %f", base,height);
}

void find_area(float base,float height,float*area)
{
  *area = 0.5*base*height;
}

void output(float base,float height,float area)
{
  printf("Area of the triangle of base %f and height %f is %f",base,height ,area);
}

int main()
{
 float base,height,area;
 input(&base,&height);
 find_area(base,height,&area);
 output(base,height,area);
 return 0;
}



