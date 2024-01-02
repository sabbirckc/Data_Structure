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
    int max= a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("\nmaximum= %d ",max);




    return 0;

}
