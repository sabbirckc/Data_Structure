#include<stdio.h>
int main()
{
    int second,hours,remainding_second1,min,remainding_second2;
    printf("Enter the second number:");
    scanf("%d",&second);

    hours=second/3600;

    remainding_second1=second%3600;

    min=remainding_second1/60;

    remainding_second2=min%60;

    printf("Hours: %d Minutes: %d Seconds: %d",hours,min,remainding_second2);

    return 0;

}
