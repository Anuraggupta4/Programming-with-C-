#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the a,b,c values");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is bigger");
    }
    else if(b>c)
    {
        printf("b is bigger");
    }
    else{
        printf("c is bigger");
    }
}