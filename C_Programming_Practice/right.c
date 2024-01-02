#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the n value= ");
    scanf("%d",&n);
    int a[n];
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d. Enter the array size= ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    int k;
    printf("how many index you want to right= ");
    scanf("%d",&k);
    for(i=n-1;i>=k;i--)
    {
        a[i]=a[i-k];
    }

    for(i=0;i<k;i++)
    {
       a[i]=0;
    }
     for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }



    return 0;
}
