#include <stdio.h>
float f(int a,int b,int c)  
{
  double d,x1,x2;
  d=(b*b)-4*a*c;
  if (d>0)
  {
      x1=(-b+sqrt(d))/(2*a);
      x2=(-b-sqrt(d))/(2*a);
      printf("x1=%f\n",x1); 
      printf("x2=%f",x2); 
  }
  if (d<0)
  {
      printf("Корней нет");
  }
  if (d==0)
  {
      x1=(-b+sqrt(d))/(2*a);
      printf("x1=x2=%f", x1);
  } 
  return 0; 
  
}
int main()
  {
      printf("%i ",f(2, 2, -2));
      system("pause");    
  }