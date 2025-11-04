#include<stdio.h>
int main()
{
    int n,decimal=0,base=1;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        int bit=n%10;
        decimal+=bit*base;
        base=base*2;
        n=n/10;
    }
    printf("%d",decimal);

}