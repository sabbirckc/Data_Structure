#include<stdio.h>
int main()
{
    int X;
    printf("Enter a value:");
    scanf("%d",&X);
    if (X%2==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
    return 0;
}
