#include <stdio.h>
void nonZeroElements(int* ,int );
void aboveLeadingDiagonal(int *, int );
void showMinorElements(int * , int );
void mulDiagonalElement(int * , int );
int main(){
    int nos;
    printf("Enter the Size of Array : ");
    scanf("%d",&nos);
    int arr[nos][nos];
    printf("Enter the Array Elements : \n");
    for(int i = 0;i<nos;i++){
        printf("Row %d : ",i+1);
        for(int j = 0;j<nos;j++)
            scanf("%d",&arr[i][j]);
    }
    nonZeroElements(arr[0],nos);
    aboveLeadingDiagonal(arr[0],nos);
    showMinorElements(arr[0],nos);
    mulDiagonalElement(arr[0],nos);
    return 0 ;
}
void nonZeroElements(int *arr , int nos){
    int count = 0;
    for(int i = 0;i<nos*nos;i++){
        if((*arr) != 0)
            count++;
        arr++;
    }
    printf("\nThe Number of Non-Zero Elements : %d\n",count);
}
void aboveLeadingDiagonal(int *arr,int nos){
    int sum = 0;
    for(int i = 0;i<nos;i++)
        for(int j = 0;j<nos;j++){
            if(j>i)
                sum+= *(arr);
            arr++;
        }
    printf("The Sum of Elements above Leading Diagonal : %d\n",sum);
}
void showMinorElements(int * arr , int nos){
    printf("The Elements below Minor Diagonal : ");
    for(int i = 0;i<nos;i++)
        for(int j = 0;j<nos;j++){
            if(i>j)
                printf("%d ",*(arr));
            arr++;
        }
    printf("\n");
}
void mulDiagonalElement(int * arr , int nos){
    int mul = 1;
    for(int i = 0;i<nos;i++)
        for(int j = 0;j<nos;j++){
            if(j == i)
                mul*=*(arr);
            arr++;
        }
    printf("The Product of Diagonal Elements are : %d",mul);
}