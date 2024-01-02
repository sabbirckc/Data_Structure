#include<stdio.h>
int main()
{
    int weight,M,load;

    printf("the total weight of the shipment:");
    scanf("%d",&weight);

    M=weight/4;

    load=M*4;

    printf("Total weight=%d",load);
    return 0;

}
