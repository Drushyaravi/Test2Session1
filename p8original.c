#include <stdio.h>
#include <math.h>
struct _point {
float x,y;
};
typedef struct _point point;
struct _line
{
point p1, p2;
float distance;
};
typedef struct _line line;
struct _polygon
{
int n;
line l[100];
float perimeter;
};
typedef struct _polygon Polygon;
int input_n()
{
  int n;
  printf("Enter the number of sides of the polygon\n");
  scanf("%d", &n);
  return n;
}

float my_sqrt(float n)
{
  float z;
  double sqrt =0, i, x;
  i=n/2;
  while (i<n) {
    x=(i + n/i)/2;
    z=x;
    if(z==i) {
      sqrt=z;
      return sqrt;
    } 
    else
      i=z;
    
      }
  return sqrt;
}

line input_line()
{
  point p1, p2;
  line l1;
  float f;
  printf("enter the points p1\n");
  scanf("%f%f", &p1.x, &p1.y);
  printf("enter the points p2\n");
  scanf("%f%f", &p2.x, &p2.y);
  l1.p1=p1;
  l1.p2=p2;
  l1.distance=my_sqrt (((p2.x-p1.x)*(p2.x-p1.x))+(p2.y-p1.y)*(p2.y-p1.y));
  return l1;
}
void input_n_lines(int n, line l[n])
{
  for (int i=0; i<n; i++)
  {
    l[i]=input_line();
  }
}

void input_polygon(int n, Polygon *p)
{
  p->n=n;
  input_n_lines(n,p->l);
}
void find_perimeter(int n, Polygon *p)
{
  p->perimeter=0;
  for (int i=0; i<n; i++)
    {
      p->perimeter=p->perimeter + p->l[i].distance;
    }
}
void output(Polygon *p)
{
  printf("The perimeter of the polygon is as follows %f\n", p->perimeter);
}
int main()
{
  Polygon p;
  int n=input_n();
  input_polygon (n,&p);
  find_perimeter(n,&p);
  output(&p);
  return 0;
}