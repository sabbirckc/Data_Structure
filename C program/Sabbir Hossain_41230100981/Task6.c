#include<stdio.h>
int main()
{
    int number;

    printf("Enter the number:");
    scanf("%d",&number);

    if(number%2==0)
       {
           printf("NUMBER 2 IS MULTIPLE");
       }
    else if(number%5==0)
    {
        printf("NUMBER 5 IS MULTIPLE");
    }

    else
        printf("NOT A MULTIPLE 2 OR 5");

        return 0;



}

