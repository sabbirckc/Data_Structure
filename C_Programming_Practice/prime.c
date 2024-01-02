#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter the N value= ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0){
            count++;
            printf("counter= %d\n",count);
            break;
            }

    }
    if(count==0){
            printf("prime\n");
            printf("counter= %d",count);
    }

        else
            printf("not prime");
    return 0;

}
