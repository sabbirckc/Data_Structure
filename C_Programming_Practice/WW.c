#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the n value= ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
          printf("%d\t",a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\t",a[i]);
            printf("%d\t",a[n-2-i]);
        }
    }
    printf("\n");












    return 0;
}
