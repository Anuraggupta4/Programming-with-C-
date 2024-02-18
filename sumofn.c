#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter the n value" );
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
       sum=sum+i;
       
    }
    printf("%d",sum);
}