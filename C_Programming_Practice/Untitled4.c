#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year= ");
    scanf("%d",&year);

    if(year%400==0)
        printf("This year is leep year ");
    else if(year%4==0 && year%100!=0)
        printf("This year is leep year");
    else
        printf("Not leep year");


    return 0;
}
