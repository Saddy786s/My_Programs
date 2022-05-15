#include<stdio.h>
int main()
{
    int arr[5];
    printf("Please Enter 5 numbers");
    for(int i=0;i<5;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<5;i++){
        printf("\nEnter number %d: %d",i+1,arr[i]);
    }
return 0;
}
