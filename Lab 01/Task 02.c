#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the n value= ");
    scanf("%d",&n);
    int source[n];
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the array value %d= ",i+1);
        scanf("%d",&source[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",source[i]);
    }
    printf("\n");
     int k;
    printf("Which number you want to right =");
    scanf("%d",&k);

    for(i=n-1; i>=k; i--)
    {
        source[i]=source[i-k];
    }

    for(i=0; i<k; i++)
    {
        source[i]=0;
    }



    for(i=0;i<n;i++)
    {
        printf("%d\t",source[i]);
    }




    return 0;
}
