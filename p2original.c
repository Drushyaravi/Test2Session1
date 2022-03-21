#include<stdio.h>
void input_line(float *x1, float *y1)
{
  printf("Enter two numbers:\n");
  scanf("%f%f",x1,y1);
}
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3)
{
  float a,b,c;
  printf("Enter three sides of a triangle\n");
  scanf("%f%f%f", &a,&b,&c);
  return 0;
}
void output(float x1, float y1, float x2, float y2, float x3, float y3, int is_triangle)
{
  int a,b,c;
  if((a+b)>c && (b+c)>a && (c+a)>b)
  {
    printf("Three lines form a triangle\n");
  }
  else 
  {
    printf("Three lines doesnot form a triangle\n");
  }
}
int main()
{
  float x1, y1, x2, y2, x3, y3, triangle;
  input_line(&x1, &y1);
  is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,triangle);
  return 0;
  }