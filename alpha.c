#include<stdio.h>
int main()
{
    char a;
    printf("enter a character:");
    scanf("%c",&a);
    if((a>='a'&& a<='z')||(a>='A' && a<='Z'))
    {
        printf("alphabet");
    }
    else
    {
        printf("not a alphabet");
    }
    
    return 0;
}
