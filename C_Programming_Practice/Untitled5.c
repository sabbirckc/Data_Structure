#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the char= ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
        printf("smaller");
    else if(ch>='A' && ch<='Z')
        printf("largest");
    else
        printf("not a letter");




}
