#include<stdio.h>
int main()
{
    int i,fact=1,n,A;
    printf("Enter the n value= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            fact = fact*i;
            printf("%d\n",i);
        }
    printf(" FACT = %d",fact);

    return 0;

}
