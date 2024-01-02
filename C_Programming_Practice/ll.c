#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
            continue;
        if(i==55)
        break;
        printf("%d\n",i);
        //break;
    }



    return 0;
}
