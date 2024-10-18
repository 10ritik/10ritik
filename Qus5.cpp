#include<stdio.h>
int main()
{
  int val=5;
  do{
     val++;
     ++val;
  }while(val++>7);
 printf("%d",val);
 return 0;
}
