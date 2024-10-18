#include<stdio.h>
int func(int no)
{
    static int count=0;
    count=count+no;
    return count;
}
int main()
{
    int i,j;
    for(i=0;i<=5;i++)
       j=func(i);
    printf("%d",j);
}
