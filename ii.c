#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a number:");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d",a);
    }
    else if(b>a && b>c)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }
    
    
    return 0;
}
