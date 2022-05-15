#include<stdio.h>
int main()
{
    int a[2][2], b[2][2];
    printf("This program add two 2x2 Matrix");
    printf("\nEnter the first matrix:");
    for(int i=0; i<2;i++){
        for(int j=0; j<2;j++){
            printf("\nEnter number %d x %d : ", i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the Second matrix:");
    for(int i=0; i<2;i++){
        for(int j=0; j<2;j++){
            printf("\nEnter number %d x %d : ", i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nThe addition of of Matrix is:\n");
    for(int i=0; i<2;i++){
        for(int j=0; j<2;j++){
            printf("%d\t ", a[i][j]+b[i][j]);
        }
        printf("\n");
    }
return 0;
}