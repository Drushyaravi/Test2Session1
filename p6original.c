#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
  FILE *fp = fopen(argv[1], "r");
  int len, i=0, c=0;
  fseek(fp, 0, SEEK_END);
  len = ftell(fp);
  rewind(fp);
  char ch, arr[len], *p, *q;
  while((ch=fgetc(fp)) != EOF)
    {
      arr[i]=ch;
      i++;
    }
  rewind(fp);
  char a[200];

  while((fgets(a, 200, fp)))
    {
      q=a;
      if((p=strstr(a, arr))!=NULL)
      {
        while(q!=p)
          {
            c++;
            q++;
          }
        printf("c>>%d \n", c);
      }
    }
}
