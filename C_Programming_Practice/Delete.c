#include<stdio.h>
int main(){

    //taking the array size.
    int n;
    printf("Enter the size of Array: ");
    scanf("%d", &n);
    int ar[n];

    //inputin the array elements
    printf("Enter the Array elements: \n");
    for(int i=0; i<n; i++){
        printf("ar[%d]=", i);
        scanf("%d", &ar[i]);
    }

    printf("\nThe array is: \n");
    for(int i=0; i<n; i++){
        printf("%d ", ar[i]);
    }

    int y;
    printf("\nEnter the index number you want: ");
    scanf("%d", &y);

    int x;
    printf("\nEnter the New value of index: ");
    scanf("%d", &x);

    for(int i=0; i<n; i++){
        if(i==y){
            ar[i]=x;
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", ar[i]);
    }

    return 0;
}
