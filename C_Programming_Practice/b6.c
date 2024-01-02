#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a=");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("%d",a);
    }
    else if(a%5==0)
    {
        printf("%d",a);
    }

    else
        printf("Not a multiple of 2 OR 5");
}
