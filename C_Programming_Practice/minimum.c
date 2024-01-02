#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the n value= ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("%d. Enter the array value= ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    int min= a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("minimum= %d",min);



}
