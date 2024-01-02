#include <stdio.h>
int main()
{
    int n, i,s,m,m1=0,m2=0;

    printf("Enter the value of n=");
    scanf("%d",&n);

    for (i = 1; i <=n; i++)
        {
        if(i%2==0)
        {
           s=-1*i*i;
           m1=m1+s;
        }

        else if(i%2!=0)
        {
           m2=m2+i*i;
        }

    }

    m=m1+m2;
    printf("%d", m);

    return 0;
}
