#include<stdio.h>
int main()
{
    int i=5;
    sabbir:
        printf("%d\t",i);
        i++;
        if(i<=20)
            goto sabbir;



    return 0;
}
