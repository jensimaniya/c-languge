#include<stdio.h>
int main()
{
    int a,b;
    printf("enter value of a :");
    scanf("%d",&a);
    printf("enter value of b :");
    scanf("%d",&b);

    if(a<b)
    {
        printf("minimum value is %d",a);
    }
    else
    {
        printf("maximum value is %d",b);
    }
}