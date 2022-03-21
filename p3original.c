#include <stdio.h>
int input_number()
{
  int a;
  printf("Enter a number:\n");
  scanf("%d", &a);
  return a;
}
int is_prime(int n)
{
  int i, flag=0;

  for(i=1;i<=n;i++)
    {
      if(n%i==0)
        flag++;
      break;
    }
}
void output(int n, int is_prime)
{
  int flag;
  if(flag==2)
  {
    printf("%d is a prime number\n",n);
  }
  else
  {
printf("%d is not a prime number\n",n);    
  }
}
int main()
{
  int n;
  n=input_number();
  is_prime(n);
  int is_prime;
  output(n, is_prime);
  return 0;
}