#include<stdio.h>


void bubble(int a[], int size)
{
    int temp, i, j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-1;j++)
        {

            if(a[j]>a[j+1])
        {

            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        }
    }
    for(i=0;i<size;i++)
{
    printf("%d\t",a[i]);
}
}

int main()
{

int a[5]={3,5,1,4,2}, i,j,temp;
   bubble(a,5);

}
