#include<stdio.h>
int main()
{
    char a;
    printf("enter a character");
    scanf("%c",&a);
    if(a=='a'|| a=='A' || a=='e' || a=='E' || a=='i' || a=='I' ||a=='o'||a=='O'||a=='u'||a=='U')
    {
        printf("vowel");
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}
