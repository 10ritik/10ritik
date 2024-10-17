#include<stdio.h>
int main( )
{
  int n=5, k, f1, f2, f;
  if ( n < 2 )
   return n;
  else
  {
    f1 = f2 = 1;
    for(k=2;k<n;k++)
      {
        f = f1 + f2;
        f2 = f1;
        f1 = f;
      }
    printf("%d",f) ;
  }
}
