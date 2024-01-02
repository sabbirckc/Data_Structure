#include<stdio.h>
int main()
{
    int n,k,i,j;
    printf("Enter the array size= ");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the array value=");
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
            }
    printf("Enter the new size array=");
    scanf("%d",&k);
    int array2[k];
    for(i=0;i<n;i++)
    {
        array2[k]=array[i];
    if(k==k)
    {
        printf("%d",array2[i]);
    }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",array2[k]);

    }
}
