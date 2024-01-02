#include<stdio.h>
int main()
{
    int i,N,sum=0;
        printf("Enter the value of N=");
        scanf("%d",&N);
        for(i=1;i<=N;i++)
        {
            if(i%7==0)
            {
                sum=sum+i;
            }
        }
        printf("Sum=%d",sum);

        return 0;
}
