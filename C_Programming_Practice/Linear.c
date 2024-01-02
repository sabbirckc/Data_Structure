#include<stdio.h>
int main()
{
    int n,pos=-1,i;
    printf("Enter the array size= ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the value= ");
        scanf("%d",&a[i]);
        a[n]=a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    int value;
    printf("Enter the value which you want to search= ");
    scanf("%d",&value);

    for(i=0;i<n;i++)
    {
        if(a[i]==value)
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("Not found");
    }
    else
        printf("possition  %d",pos);



    return 0;
}
