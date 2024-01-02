#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the array size= ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the array value= ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    int pos=-1;
    int value;
    printf("\n\n\n");
    printf("Enter the value= ");
    scanf("%d",&value);
    for(i=0;i<n;i++)
    {
        if(value==a[i])
        {
            pos=i+1;
            break;
        }
    }
    printf("value= %d",value);
    if(pos==-1)
    {
        printf("Not found");
    }
    else

    printf("the position= %d",pos);




}
