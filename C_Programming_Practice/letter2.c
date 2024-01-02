#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter the lower char: ");
    scanf("%c",&lower);

    upper= toupper(lower);
    printf("The uppercase: %c",upper);


}
