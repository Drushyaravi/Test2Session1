#include <stdio.h>

void input(float *x1,float *y1, float *x2, float *y2)
{
  printf("Enter the coordinates of 1st point x and y as in (x,y):\n");
  scanf("%f %f", x1,y1);
  printf("Enter the coordinates of 2nd point x and y as in (x,y):\n");
  scanf("%f %f", x2, y2);
}

float d_sqrt(float n)
{
  float z;
  double sqrt =0, i, x;
  i=n/2;
  while (i<=n/2){
    x=(i+ n/i)/2;
    z=x;
    if(z==i){
      sqrt=z;
      return sqrt;
    }
    else
    i=z;
    
  }
  return sqrt;
}

void find_distance(float x1, float y1, float x2, float y2, float *distance)
{
  float p,q,r;
  p=(x1-x2)*(x1-x2);
  q=(y1-y2)*(y1-y2);
  r=p+q;
  *distance=d_sqrt(r);
}

void output(float x1, float y1, float x2, float y2, float distance)
{
  printf("The distance between points (%f,%f) and (%f,%f) is %f\n", x1,y1,x2,y2,distance);
}

int main()
{
  float x1,y1,x2,y2,d;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&d);
  output(x1,y1,x2,y2,d);
  return 0;
}
