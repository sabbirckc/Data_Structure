#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the array size");
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
    int new_array[n];

    for(i=0;i<n;i++)
    {
        new_array[i]=array[n-1-i];
    }
     for(i=0;i<n;i++)
    {
        printf("\n%d\t",new_array[i]);
    }
}
