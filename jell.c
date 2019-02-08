#include<stdio.h>
int main()
{
    int a,i,N=0;
    printf("enter a number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
     N=N+i;
    }
    printf("%d",N);
    
    return 0;
}
