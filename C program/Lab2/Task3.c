#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the m & n value:");
    scanf("%d %d",&m,&n);
    if(m>n)
    {
        printf("first is greater");
    }
    else if(m<n)
    {
        printf("second number is greater");
    }
    else
    {
        printf("the numbers are equal");
    }
    return 0;



}
