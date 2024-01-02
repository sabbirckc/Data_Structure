#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the array size= ");
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
    printf("\n");
    int k;
    printf("how many size you want to left= ");
    scanf("%d",&k);
    for(i=0;i<n-k;i++)
    {
        a[i]=a[i+k];
    }
    for(i=0;i<n-k;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=k;i<=n;i++)
    {
        a[i]=0;
    }
    for(i=k;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }

    return 0;
}
