#include<stdio.h>
#include <math.h>

typedef struct _point
{
float x,y;
}Point;

struct _line
{
Point p1, p2;
float distance;
};
typedef struct _line Line;

Point input_point()
{
  Point f;
  printf("Enter the coordinates as x and y as in (x,y);\n");
  scanf("%f%f", &f.x, &f.y);
  return f;
}

Line input_line()
{
  Line s;
  float g,h;
  s.p1=input_point();
  s.p2=input_point();
  g=(s.p1.x - s.p2.x)*(s.p1.x - s.p2.x);
  h=(s.p1.y - s.p2.y)*(s.p1.y - s.p2.y);
  s.distance=sqrt(g+h);
  return s;
}