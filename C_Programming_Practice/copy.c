#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the array size= ");
    scanf("%d",&n);
    int a1[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the array value= ");
        scanf("%d",&a1[i]);
    }
    printf("a1= ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a1[i]);
    }
    printf("\n\n\n");
    int a2[n];
    for(i=0;i<n;i++)
    {
        a2[i]=a1[i];
    }
    printf("a2= ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a2[i]);
    }






}
