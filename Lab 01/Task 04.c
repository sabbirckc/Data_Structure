#include<stdio.h>
int main()
{
    int i,n,k;
    printf("Enter the n value= ");
    scanf("%d",&n);
    int source[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the array value, %d= ",i+1);
        scanf("%d",&source[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",source[i]);
    }
    printf("\n");
    printf("Enter the number of positions to rotate Right: ");
    scanf("%d", &k);
    int arr2[n];
    for (int i = 0; i < n; i++)
        {
        arr2[(i +k) % n] = source[i];
        }
     for (int i = 0; i < n; i++)
        {
        source[i] = arr2[i];
        }
    for (int i = 0; i < n; i++)
        {
        printf("%d\t", source[i]);
        }



    return 0;
}

