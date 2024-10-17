#include<stdio.h>
int fun(int x, int y);
int main()
{
  int i,n;
  i=5;
  n=7;
  int f = fun(5,7);
  printf("%d", f);
}

int fun(int x, int y)
{
  if(x<=0)
  return y;
  else
  return(fun(x-1,y-1));
}
