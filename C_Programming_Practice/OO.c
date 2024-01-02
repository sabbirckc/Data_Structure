#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter the n value= ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        arr[i]=rand()%100;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[n-1-i]);
    }





    return 0;

}
