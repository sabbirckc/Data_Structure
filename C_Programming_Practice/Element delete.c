#include<stdio.h>
int main(){

    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int ar[n];

    printf("Enter the array value: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    printf("The array is: \n");
    for(int i=0; i<n; i++){
        printf("%d ", ar[i]);
    }

    int x;
    printf("\nEnter the index want to remove: ");
    scanf("%d", &x);

    printf("The new array is: \n");
    for(int i=0; i<n; i++){
        if(i==x){
            continue;
        }else{
            printf("%d ", ar[i]);
        }
    }


    return 0;
}
