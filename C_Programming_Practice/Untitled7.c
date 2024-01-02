#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the char= ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I'
       || ch=='o' ||ch=='O' || ch=='u' || ch=='U')
        printf("The letter is vowal");
    else
        printf("The letter is consonent");





}
