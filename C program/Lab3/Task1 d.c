#include<stdio.h>
int main()
{
    int i;
    for(i=18;i<=63;i=i+9)
    {
        if(i%2!=0)
        {
            printf("%d,",-1*i);
        }
        else
            printf("%d,",i);
    }
}
