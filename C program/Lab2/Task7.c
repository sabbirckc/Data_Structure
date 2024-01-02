#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);

   if((number%2==0) && (number%5==0))
    {
       printf("Multiple of 2 and 5 both");
    }
    else if (number%2==0)
    {
        printf("Number 2 is multiple");
    }
    else if (number%5==0)
    {
       printf("Number 5 is multiple");
    }

    else
    {
        printf("Not a multiple we want");
    }

    return 0;

}
