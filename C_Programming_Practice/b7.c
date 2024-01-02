#include<stdio.h>
int maind()
{
    int a;
    printf("Enter the value of a=");
    scanf("%d",&a);

    if(a%2==0 || a%5==0)
    {
        printf("%d",a);
    }
    else if(a%2==0 && a%5==0)
    {
        printf("Multiple of 2 and 5 both");
    }
    else
    {
        printf("Not a multiple we want");
    }
}
