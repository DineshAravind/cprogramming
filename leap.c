#include<stdio.h>
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if(a%4 == 0)
    {
        printf("yes");
    }
    else
    {
        printf("invalid input");
    }
    
    return 0;
}
