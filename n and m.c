#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    while(m!=0)
    {
    int d=n%m;
    n=m;
    m=d;
    }
    printf("最大公约数是%d",n);
    return 0;
}