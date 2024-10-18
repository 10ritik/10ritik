#include<stdio.h>

int main()
{
    int a=5,b=2,c=1;
    if(b>a && a>c && c>b)
        b=a+1;
    else
        a=b+1;
    printf("%d",a+b+c);
}
