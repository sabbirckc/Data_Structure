#include<stdio.h>
int main()
{
    int i,s;
    char ch;

    printf("Enter the word=");
    scanf("%c",&ch);

    printf("Enter the value=");
    scanf("%d",&s);

    for(i=1;i<=s;i++)
    {
        printf("%c",ch);
    }
    return 0;
}
