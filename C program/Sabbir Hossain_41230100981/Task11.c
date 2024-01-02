#include<stdio.h>
int main()
{
    int S,L;
   // float L;

    printf("S=");
    scanf("%d",&S);
    if(S<100)
    {
        L=3000-(125*pow(S,2));
        printf("L=%d",L);
    }
    else if(S>=100)
    {

     L=12000/(4+pow(S,2)/14900);
     printf("L=%d",L);
    }






}
