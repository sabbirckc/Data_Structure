#include<stdio.h>
int main()
{
    int number;
    printf("Enter the value:");
    scanf("%d",&number);

    if((number%2==0)&&(number%5==0))
    {
        printf("it is a multiple of 2 AND 5");
    }
    else
    {
        printf("Not multiple of 2 and 5 both");
    }

    return 0;



}
