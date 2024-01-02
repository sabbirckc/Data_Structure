#include<stdio.h>
int main()
{
    int C,F,remaining;
    printf("Enter the total chocolate=");
    scanf("%d",&C);


    F=C/3;
    printf("Each friend will receive %d chocolates\n",F);
    remaining= C-F*3;

    printf("The number of remaining chocolates is %d",remaining);




}
