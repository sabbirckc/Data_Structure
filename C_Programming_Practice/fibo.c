#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the array size= ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<2;i++)
    {

        printf("index value= ");
        scanf("%d",&a[i]);
    }
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }







    return 0;
}
