#include<stdio.h>
int main()
{
    int i,j,r1,r2,c1,c2;
    printf("Enter the r1= ");
    scanf("%d",&r1);
    printf("Enter the c1= ");
    scanf("%d",&c1);
    printf("Enter the r2= ");
    scanf("%d",&r2);
    printf("Enter the c2= ");
    scanf("%d",&c2);

    int a1[r1][c1],b1[r2][c2];

    while(c1!=r2)
    {
        printf("ERROR\n");
    printf("Enter the r1= ");
    scanf("%d",&r1);
    printf("Enter the c1= ");
    scanf("%d",&c1);
    printf("Enter the r2= ");
    scanf("%d",&r2);
    printf("Enter the c2= ");
    scanf("%d",&c2);
    }
    printf("\n");
    printf("Metrix A= ");
    printf("\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("a1[%d][%d]= ",i,j);
            scanf("%d",&a1[i][j]);
        }
        printf("\n");
    }
    printf("A1= \t");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",a1[i][j]);
        }
        printf("\n\t");
    }
    printf("Metrix B= ");
    printf("\n");

     for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("b1[%d][%d]= ",i,j);
            scanf("%d",&b1[i][j]);
        }
        printf("\n");
    }
    printf("B1= \t");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",b1[i][j]);
        }
        printf("\n\t");
    }








    return 0;
}
