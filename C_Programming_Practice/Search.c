#include<stdio.h>
int main()
{
    int n,i,p;
    printf("Enter the first array size=\n");
    scanf("%d",&n);
    int arr1[n];
    for(i=0; i<n; i++)
    {
        printf("Enter the first array value=");
        scanf("%d",&arr1[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d\t",arr1[i]);
    }
    /*int temp[n];
    for(i=0;i<n;i++) //5 4 3 2 1
    {
        temp[i]=arr1[n-1-i];
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",temp[i]);
    }
    printf("\n");*/
    for(i=0;i<n;i++) //5 4 3 2
    {
        arr1[i]=arr1[n-1-i];
        printf("\n");

        printf("%d ----> %d%d\n", i, n-1-i,arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr1[i]);
    }







    return 0;
}
