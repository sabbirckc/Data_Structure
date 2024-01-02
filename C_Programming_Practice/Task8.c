#include<stdio.h>
int main()
{
    int chocolate,M,x;

    printf("Enter the value:");

    scanf("%d",&chocolate);

    x=chocolate/3;

    printf("Each friend will receive:%d chocolates\n",x);

    M=chocolate%3;

    printf("The number of remaining chocolates is=%d",M);

    return 0;
}
